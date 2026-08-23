/*
6. Cálcule a distância entre dois pontos no plano cartesiano, conforme a equação a seguir. Utilize
uma estrutura para definir o tipo de dado.
dAB=√( x2 − x1 )2 +( y2 − y1 )2

*/

#include <stdio.h>
#include <math.h>

// Definição da estrutura para representar um ponto 2D
struct Ponto {
    float x;
    float y;
};

int main() {
    struct Ponto pA, pB;
    float distancia;

    // --- LEITURA DO PONTO A ---
    printf("--- Ponto A ---\n");
    printf("x1: ");
    scanf("%f", &pA.x);
    printf("y1: ");
    scanf("%f", &pA.y);

    // --- LEITURA DO PONTO B ---
    printf("\n--- Ponto B ---\n");
    printf("x2: ");
    scanf("%f", &pB.x);
    printf("y2: ");
    scanf("%f", &pB.y);

    // --- CÁLCULO DA DISTÂNCIA ---
    // dAB = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    distancia = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));

    // --- EXIBIÇÃO DO RESULTADO ---
    printf("\nA distância entre o Ponto A e o Ponto B é: %.2f\n", distancia);

    return 0;
}