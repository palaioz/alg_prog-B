/*
-  4. Fazer a multiplicação de um escalar (um número) por uma matriz
-  alocada dinamicamente. As dimensões da matriz são informadas pelo
-  usuário.
- */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarElementosMatriz(int **m, int l, int c) {
    int i, j;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            m[i][j] = rand() % 99;
        }
    }
}

void multiplicarNumeroMatriz(int **m, int l, int c, int k) {
    int i, j;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            m[i][j] = m[i][j] * k;
        }
    }
}

void imprimirMatriz(int **m, int l, int c) {
    int i, j;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void liberarMatriz(int **m, int l) {
    int i;

    for (i = 0; i < l; i++) {
        free(m[i]);
    }
    free(m);
}

int main(void) {
    int lin, col, k, i, j;
    int **matriz = NULL;

    srand((unsigned int)time(NULL));

    printf("\nDigite o numero de linhas: ");
    if (scanf("%d", &lin) != 1 || lin <= 0) {
        printf("\n[ERRO] Numero de linhas invalido.\n");
        return 1;
    }

    printf("\nDigite o numero de colunas: ");
    if (scanf("%d", &col) != 1 || col <= 0) {
        printf("\n[ERRO] Numero de colunas invalido.\n");
        return 1;
    }

    printf("\nDigite o escalar: ");
    if (scanf("%d", &k) != 1) {
        printf("\n[ERRO] Escalar invalido.\n");
        return 1;
    }

    matriz = (int **)malloc((size_t)lin * sizeof(int *));
    if (matriz == NULL) {
        printf("\n[ERRO] Erro na alocacao das linhas.\n");
        return 1;
    }

    for (i = 0; i < lin; i++) {
        matriz[i] = (int *)malloc((size_t)col * sizeof(int));
        if (matriz[i] == NULL) {
            printf("\n[ERRO] Erro na alocacao da linha %d.\n", i);
            for (j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    gerarElementosMatriz(matriz, lin, col);

    printf("\n--- Matriz original ---\n");
    imprimirMatriz(matriz, lin, col);

    multiplicarNumeroMatriz(matriz, lin, col, k);

    printf("\n--- Matriz multiplicada por %d ---\n", k);
    imprimirMatriz(matriz, lin, col);

    liberarMatriz(matriz, lin);

    return 0;
}
