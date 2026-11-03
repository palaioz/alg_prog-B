/*
 *  12. Faça um programa que lê duas matrizes A e B, de ordem 3x3,
 *  e efetua a soma das matrizes gerando a matriz C. Posteriormente,
 *  encontre o maior elemento da matriz A e o maior elemento da matriz 
 *  B. Utilize funçõese ponteiros. 
 * */

#include <stdio.h>

void somarMatrizes(int *a, int *b, int *c, int linhas, int colunas) {
    int total = linhas * colunas;
    for (int i = 0; i < total; i++) {
        *(c + i) = *(a + i) + *(b + i);
    }
}

int maiorElemento(int *mat, int linhas, int colunas) {
    int maior = *mat;
    int total = linhas * colunas;
    for (int i = 1; i < total; i++) {
        if (*(mat + i) > maior) {
            maior = *(mat + i);
        }
    }
    return maior;
}

int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3];

    printf("Digite os elementos da matriz A (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    somarMatrizes((int *)A, (int *)B, (int *)C, 3, 3);

    printf("Matriz C (A + B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    int maiorA = maiorElemento((int *)A, 3, 3);
    int maiorB = maiorElemento((int *)B, 3, 3);

    printf("Maior elemento da matriz A: %d\n", maiorA);
    printf("Maior elemento da matriz B: %d\n", maiorB);

    return 0;
}