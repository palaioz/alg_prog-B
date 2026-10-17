/*
 *  10. Faça um programa que lê duas matrizes 3x3 e efetua a soma das 
 *  matrizes usando funções. Use ponteiros para manipular as matrizes 
 *  nas funções.
 * */

#include <stdio.h>

void sumMatrix(int *m1, int *m2, int *res, int lines, int cols) {
    int total = lines * cols;
    for (int i = 0; i < total; i++) {
        *(res + i) = *(m1 + i) + *(m2 + i);
    }
}

void printMatrix(int *m, int lines, int cols) {
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *(m + (i * cols) + j)); // *(m + (i * cols) + j) == m[i][j]
        }
        printf("\n");
    }
}

int main(){
    int m1[3][3], m2[3][3], soma[3][3];
    int lines = 3, cols = 3;

    printf("Digite os elementos da primeira matriz (3x3):\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz (3x3):\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    sumMatrix((int *)m1, (int *)m2, (int *)soma, lines, cols);

    printf("\n--- MATRIZ SOMA (3x3) ---\n");
    printMatrix((int *)soma, lines, cols);

    return 0;
}
