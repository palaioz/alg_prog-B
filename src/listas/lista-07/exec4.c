/*
 *  4. Fazer a multiplicação de um escalar (um número) por uma matriz 
 *  alocada dinamicamente. As dimensões da matriz são informadas pelo
 *  usuário.
 * */

#include <stdio.h>
#include <stdlib.h>

void gerarElementosMatriz(int **m, int l, int c) {
    int i, j;

    for (i = 0; i < l; i++) {
        for (j = 0; j < col; j++) {
            m[i][j] = rand()%99;
        }
    }
}

void multiplicarNumeroMatriz(int **m, int l, int c, int k) {
    
    return ;
}

int main() {
	int lin, col;
    int **matriz; 

    srand(time(NULL));

    printf("\nDigite o numero de linhas: ");
    scanf("%d", &lin);

    printf("\nDigite o numero de colunas: ");
    scanf("%d", &col);

    gerarElementosMatriz(matriz, lin, col);

    return 0;
}
