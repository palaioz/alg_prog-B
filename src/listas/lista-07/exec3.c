/*
 *  3. Sejam duas matrizes A e B de mesmo tamanho e cujo tamanho é 
 *  informado pelo usuário. Desenvolva um algoritmo para obter a soma
 *  das matrizes, utilizando alocação dinâmica e funções.
 * */

#include <stdio.h>
#include <stdlib.h>

int *soma_matriz(int *A, int *B, int N) {
    int *C;
    int i, j;

    C = (int *) malloc((size_t)N * sizeof(int));
    if (C == NULL) {
        printf("[ERRO] Erro de alocacao de memoria!\n");
        exit(-1);
    }

    for (i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    return C;
}

int main(void){
	int *A = NULL, *B = NULL, *C = NULL;
    int col, lin, tam, i, j;

    printf("Quantidade de colunas nas matrizes: ");
    if (scanf("%d", &col) != 1 || col <=0){
        printf("\n[ERRO] Quantidade de colunas invalida!\n");
        return 1;
    }
    
    printf("\nQuantidade de linhas nas matrizes: ");
    if (scanf("%d", &lin) != 1 || col <=0){
        printf("\n[ERRO] Quantidade de linhas invalida!\n");
        return 1;
    }

    tam = lin * col;

    A = (int *) malloc((size_t)tam * sizeof(int));
    B = (int *) malloc((size_t)tam * sizeof(int));

    if (A == NULL || B == NULL) {
        printf("[ERRO] Erro de alocacao de memoria!\n");
        free(A);
        free(B);
        return 1;
    }

    printf("\n--- Digite os elementos da Matriz A ---\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i * col + j]);
        }
    }

    printf("\n--- Digite os elementos da Matriz B ---\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i * col + j]);
        }
    }

    C = soma_matriz(A, B, tam);

    printf("\n--- Matriz C (A + B) ---\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", C[i * col + j]);
        }
        printf("\n");
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
