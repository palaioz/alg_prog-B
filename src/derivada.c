#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void cleanBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/*  Função para calcular e exibir a derivada do polinômio
 *  n: grau do polinômio original
 *  v: vetor de coeficientes do polinômio original
 */
void derivative(int n, double v[]) {
    // f(x) = c -> f'(x) = 0
    if (n == 0) {
        printf("\nDerivada: 0\n");
        return;
    }

    return;
}


int main() {
    // Teste
    int a = 2;
    double v[] = {0};
    derivative(a, v);
}