/*
 * 7. Um método de resolução de sistemas de equações lineares algébricas
 * utiliza, em seu algoritmo, operações algébricas sobre matrizes e vetores.
 * Parte deste método é definido como :
 *      - a = A (x) B
 *      - A = aB
 *      - a = A (x) A
 *      - B = aA
 * onde A e B são vetores, 'a' é um escalar (número) e (x) é o produto escalar
 * de dois vetores, obtido pela seguinte equação:
 *      a_i * b_i
 *      A (x) B = {n-1}somatorio{i=0} -> a[i] * b[i]
 * Desenvolva o algoritmo para obter o valor final de 'a', A e B. Considere que:
 *      - O tamanho dos vetores A e B são iguais e são informados pelo usuário;
 *      - Os valores iniciais de 'a', A e B são informados pelo usuário;
 *      - Funções são utilizadas para leitura/exibição dos dados;
 *      - Deve existir uma função para cada tipo de cálculo.
*/

#include <stdio.h>

// Leitura de dados
int ler_tamanho(void) {
    int n;
    printf("Informe o tamanho dos vetores A e B (N): ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        printf("Tamanho invalido. Digite um inteiro maior que zero: ");
    }
    return n;
}

double ler_escalar(const char *mensagem) {
    double valor;
    printf("%s", mensagem);
    while (scanf("%lf", &valor) != 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        printf("Valor invalido. Digite novamente: ");
    }
    return valor;
}

void ler_vetor(const char *nome, double v[], int n) {
    printf("Digite os %d elementos do vetor %s:\n", n, nome);
    for (int i = 0; i < n; i++) {
        printf("%s[%d]: ", nome, i);
        while (scanf("%lf", &v[i]) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Valor invalido. Digite %s[%d] novamente: ", nome, i);
        }
    }
}

// Exibicao de dados
void exibir_escalar(const char *rotulo, double a) {
    printf("%s = %.4lf\n", rotulo, a);
}

void exibir_vetor(const char *nome, const double v[], int n) {
    printf("%s = [", nome);
    for (int i = 0; i < n; i++) {
        printf("%.4lf", v[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Operacoes de calculo: a = A (x) B
double produto_escalar(const double A[], const double B[], int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += A[i] * B[i];
    }
    return soma;
}

// A = a * B
void multiplicar_escalar_vetor(double a, const double B[], double A_out[], int n) {
    for (int i = 0; i < n; i++) {
        A_out[i] = a * B[i];
    }
}

// a = A (x) A
double norma_quadrada(const double A[], int n) {
    return produto_escalar(A, A, n);
}

// B = a * A
void atualizar_vetor_por_escalar(double a, const double A[], double B_out[], int n) {
    for (int i = 0; i < n; i++) {
        B_out[i] = a * A[i];
    }
}

int main(void) {
    int n = ler_tamanho();

    double a = ler_escalar("Informe o valor inicial de 'a': ");
    double A[n];
    double B[n];

    ler_vetor("A", A, n);
    ler_vetor("B", B, n);

    printf("\n--- Valores iniciais ---\n");
    exibir_escalar("a", a);
    exibir_vetor("A", A, n);
    exibir_vetor("B", B, n);

    // 1. a = A (x) B
    a = produto_escalar(A, B, n);

    // 2. A = aB
    multiplicar_escalar_vetor(a, B, A, n);

    // 3. a = A (x) A
    a = norma_quadrada(A, n);

    // 4. B = aA
    atualizar_vetor_por_escalar(a, A, B, n);

    printf("\n--- Valores finais ---\n");
    exibir_escalar("a", a);
    exibir_vetor("A", A, n);
    exibir_vetor("B", B, n);

    return 0;
}