/*
 *  3. Ler uma matriz A de números reais, de ordem N x N, em que N é informado pelo 
 *  usuário. Com o uso de funções, encontre:
 *      a. A média de valores da matriz
 *      b. Mostrar os valores que estão acima da média da matriz e sua posição na matriz
 *      c. Calcular a soma dos valores de uma linha da matriz, informada pelo usuário
 *      d. Calcular a soma dos valores de uma coluna da matriz, informada pelo usuário.
 * */

#include <stdio.h>
#include <stdlib.h>

// --- FUNÇÕES ---
int *alocarMatriz(int l, int c) {
    int *p;

    p = (int *) malloc(l * c * sizeof(int));
    
    return p;
}

void gerarMatriz(int *p, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            *(p + (i * c + j)) = rand()%20;
        }
    }
    return;
}

void mostrarMatriz(int *p, int l, int c) {
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++) {
            printf("%d\t", *(p+(i * c + j)));
        }
        printf("\n");
    }
    return;
}

void somarMatrizes(int *a, int *b, int *c, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            int k = i * c + j;
            *(c + k) = *(a + k) + *(b + k);
        }
    }
    return;
}

float mediaMatriz(int *p, int l, int c){
    float media = 0.0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            media += *(p + (i * c + j));
        }
    }
    return media / l * c;
}

// --- MAIN ---
int main() {
    int *a, *b, *c;
    int lin, col;

    printf("Quantas linhas? ");
    scanf("%d", &lin);
    printf("Quantas colunas? ");
    scanf("%d", &col);

    a = alocarMatriz(lin, col);
    b = alocarMatriz(lin, col);
    c = alocarMatriz(lin, col);

    gerarMatriz(a, lin, col);
    gerarMatriz(b, lin, col);
    gerarMatriz(c, lin, col);

    float media_a = mediaMatriz(a, lin, col);
    float media_b = mediaMatriz(b, lin, col);
    float media_c = mediaMatriz(c, lin, col);
    
    printf("\n--- 1 MATRIZ %dx%d ---\n", lin, col);
    mostrarMatriz(a, lin, col);
    printf("\n----------------");
    printf("\nMedia da matriz: %.1f", media_a);

    printf("\n--- 2 MATRIZ %dx%d ---\n", lin, col);
    mostrarMatriz(b, lin, col);
    printf("\n----------------");
    printf("\nMedia da matriz: %.1f", media_b);
    
    printf("\n--- 3 MATRIZ %dx%d ---\n", lin, col);
    mostrarMatriz(c, lin, col);
    printf("\n----------------");
    printf("\nMedia da matriz: %.1f", media_c);
    
    free(a);
    free(b);
    free(c);

    return 0;
}
