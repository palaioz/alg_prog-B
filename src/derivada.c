#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void cleanBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/*
 *  Função para calcular e exibir a derivada do polinômio.
 *  n: grau do polinômio original
 *  v: vetor de coeficientes do polinômio original 
 * */
void derivative(int n, double v[]) {
    // f(x) = c -> f'(x) = 0
    if (n == 0) {
        printf("\nDerivada: 0\n");
        return;
    }
    
    // n - 1
    int derivative_power = n - 1;
    double *v_deriv = (double *) malloc((derivative_power + 1) * sizeof(double));

    if (v_deriv == NULL) {
        printf("Erro de alocacao de memória para a derivada.\n");
        exit(1); // limpa o buffer de dados antes de sair do programa
    }

    // Cálculo dos coeficientes da derivada: d/dx (a_i * x^i) = i * a_i * x^(i-i)
    for (int i = 1; i <= n; i++) {
        v_deriv[i - 1] = v[i] * i;
    }

    printf("\n--- Resultado ---\n");
    printf("Funcao Derivada: P'(x) = ");
    
    bool first_term = true;
    for (int i = derivative_power; i >= 0; i--) {
        double coef = v_deriv[i];

        if (coef == 0.0 && derivative_power > 0) {
            continue;
        }

        if (!first_term) {
            if (coef > 0) {
                printf(" + ");
            } else {
                printf(" - ");
                coef = -coef;
            }
        } else {
            if (coef < 0) {
                printf("-");
                coef = -coef;
            }
        }
        if (i > 1) {
            printf("%.2fx^%d", coef, i);
        } else if (i == 1) {
            printf("%.2fx", coef);
        } else {
            printf("%.2f", coef);
        }

        first_term = false;
    }

    if (first_term) {
        printf("0");
    }

    printf("\n");
    
    free(v_deriv);
}

int main() {
    int n;

    // --- Leitura e tratamento de erros para o grau ---
    while (true) {
        printf("Digite o grau do polinomio (inteiro maior ou igual a 0): ");
        if (scanf("%d", &n) != 1) {
            printf("Erro: Entrada invalida. Por favor, insira um numero inteiro.\n");
            cleanBuffer();
            continue;
        }
        
        cleanBuffer();

        if (n < 0) {
            printf("Erro: O grau do polinomio nao pode ser negativo.\n");
            continue;
        }
        break;
    }

    double *v = (double *) malloc ((n+1) * sizeof(double));
    if (v == NULL) {
        printf("Erro fatal: Falha na alocacao de memoria.\n");
        return 1;
    }

    // --- Leitura dos coeficientes ---
    printf("\nInsira os coeficientes (v[0] para x^0, v[1] para x^1, ..., v[%d] para x^%d):\n", n, n);
    for (int i = 0; i <= n; i++) {
        while (true) {
            printf("Coeficientes de x^%d: ", i);
            if (scanf("%lf", &v[i]) != 1) {
                printf("Erro: Entrada invalida. Insira um numero real valido.\n");
                cleanBuffer();
                continue;
            }
            break;
        }
    }

    // --- Exibição do polinômio original --- 
    printf("\nPolinomio original: P(x) = ");
    bool p_first = true;
    for (int i = n; i >= 0; i--) {
        if (v[i] == 0.0 && n > 0) continue;
        if (!p_first) {
            if (v[i] > 0) printf(" + ");
            else { printf(" - "); }
        } else {
            if (v[i] < 0) printf("-");
        }
        double c_val = v[i] < 0 ? -v[i] : v[i];
        if (i > 1) printf("%.2fx^%d", c_val, i);
        else if (i == 1) printf("%.2fx", c_val);
        else printf("%.2f", c_val);
        p_first = false;
    }
    if (p_first) printf("0");
    printf("\n");

    derivative(n, v);

    free(v);

    return 0;
}
