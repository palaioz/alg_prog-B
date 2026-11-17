/*
 *  3. Sejam duas matrizes A e B de mesmo tamanho e cujo tamanho é 
 *  informado pelo usuário. Desenvolva um algoritmo para obter a soma
 *  das matrizes, utilizando alocação dinâmica e funções.
 * */

#include <stdio.h>

int *soma_matriz(int *A, int *B, int N) {
    int *C;
    int i, j;

    for (i = 0; i < N; i++) {
        
    }

    return C;
}

int main(){
	int *A, *B;
    int col, lin, i, j;

    printf("Quantidade de colunas nas matrizes: ");
    scanf("%d", &col);
    
    printf("\nQuantidade de linhas nas matrizes: ");
    scanf("%d", &lin);


    A = (int *) malloc(tam * sizeof(int));
    B = (int *) malloc(tam * sizeof(int));

    free(A);
    free(B);

    return 0;
}
