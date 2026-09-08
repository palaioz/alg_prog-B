/*
	5. Escrever um programa com uma função que retorna a soma dos números inteiros que existem
	entre n1 e n2 (inclusive ambos). A função deve funcionar inclusive se o valor de n2 for menor
	que n1. Ler n1 e n2 na função main().
*/

#include <stdio.h>

int sum_interval(int n1, int n2) {
    int start, end;
    int total_sum = 0;

    if (n1 <= n2) {
        start = n1;
        end = n2;
    } else {
        start = n2;
        end = n1;
    }

    for (int i = start; i <= end; i++) {
        total_sum += i;
    }

    return total_sum;
}

int main() {
    int n1, n2;

    printf("Digite o primeiro numero inteiro (n1): ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro (n2): ");
    scanf("%d", &n2);

    int res = sum_interval(n1, n2);

    printf("\nA soma dos numeros entre %d e %d (inclusive) e: %d\n", n1, n2, res);

    return 0;
}