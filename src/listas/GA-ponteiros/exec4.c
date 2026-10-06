/*
 *  4. Faça um algoritmo que leita um vetor V de 10 posições e, após,
 *     verifica se um número N, fornecido pelo usuário, existe no 
 *     vetor. Se existir, indicar a(s) posição(ões), senão escrever
 *     a mensagem "O número fornecido não existe no vetor!"
 * */

#include <stdio.h>

#define TAM 10

int main() {
    int V[TAM];
    int N;
    int encontrado = 0;

    // Leitura dos 10 elementos do vetor
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("V[%d]: ", i);
        scanf("%d", V + i);
    }

    // Leitura do número N
    printf("\nDigite o numero N a ser buscado: ");
    scanf("%d", &N);

    // Busca e exibição das posições
    for (int i = 0; i < TAM; i++) {
        if (*(V + i) == N) {
            printf("O numero %d foi encontrado no indice %d (posicao %d).\n", N, i, i + 1);
            encontrado = 1;
        }
    }

    // Mensagem caso não exista no vetor
    if (!encontrado) {
        printf("O numero fornecido nao existe no vetor!\n");
    }

    return 0;
}
