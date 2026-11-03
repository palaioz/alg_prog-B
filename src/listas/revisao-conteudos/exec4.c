/*
 *  4. Gere uma matriz A de inteiros, com ordem 10x10. Em seguida, leia 
 *  um valor e verifique se o valor lido é um dos elementos da matriz. 
 *  Se o valor for encontrado na mariz, exibir o valor encontrado e a 
 *  posição do elemento na matriz (por exemplo: "O valor X foi encontrado
 *  na posição I,J da matriz"). Utilize funções e ponteiros, para desenvolver
 *  a solução.
 * */

#include <stdio.h>

void gerarMatriz(int *mat, int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            *(mat + i * colunas + j) = i * colunas + j;
        }
    }
}

int buscarValor(int *mat, int linhas, int colunas, int valor, int *posI, int *posJ) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (*(mat + i * colunas + j) == valor) {
                *posI = i;
                *posJ = j;
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int matriz[10][10];
    int valor, i, j;

    gerarMatriz((int *)matriz, 10, 10);

    printf("Digite um valor para buscar: ");
    scanf("%d", &valor);

    if (buscarValor((int *)matriz, 10, 10, valor, &i, &j)) {
        printf("O valor %d foi encontrado na posicao %d,%d da matriz\n", valor, i, j);
    } else {
        printf("O valor %d nao foi encontrado na matriz\n", valor);
    }

    return 0;
}