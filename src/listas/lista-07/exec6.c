/*
 * 6. Seja uma matriz A e um vetor B, cujos tamanhos e elementos são 
 * informados pelo usuário. Desenvolva um algoritmo para obter o vetor
 * C que é o resultado da multiplicação A pelo vetor B.
*/

#include <stdio.h>

int main() {
    int m, n;

    printf("Informe o numero de linhas da matriz A (M): ");
    if (scanf("%d", &m) != 1 || m <= 0) {
        printf("Numero de linhas invalido.\n");
        return 1;
    }

    printf("Informe o numero de colunas da matriz A e tamanho do vetor B (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Dimensao invalida.\n");
        return 1;
    }

    int A[m][n];
    int B[n];
    int C[m];

    printf("\nDigite os elementos da matriz A (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os elementos do vetor B (tamanho %d):\n", n);
    for (int j = 0; j < n; j++) {
        printf("B[%d]: ", j);
        scanf("%d", &B[j]);
    }

    for (int i = 0; i < m; i++) {
        int soma = 0;
        for (int j = 0; j < n; j++) {
            soma += A[i][j] * B[j];
        }
        C[i] = soma;
    }

    printf("\nVetor resultante C (A * B):\n");
    for (int i = 0; i < m; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}