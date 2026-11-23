/*
 * 5. Leia um vetor de N elementos inteiros, onde N é informado pelo usuário.
 * A seguir, conte quantos valores primos existem no vetor informado.
 *
*/

#include <stdio.h>

// Retorna 1 se n for primo e 0 caso contrário
int eh_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int n;

    printf("Informe a quantidade de elementos (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int qtd_primos = 0;
    for (int i = 0; i < n; i++) {
        if (eh_primo(vetor[i])) {
            qtd_primos++;
        }
    }

    printf("Quantidade de numeros primos no vetor: %d\n", qtd_primos);

    return 0;
}