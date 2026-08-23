/*
5. Escrever um programa que leia as coordenadas de três pontos cartesianos. Considerando que os
dois primeiros pontos definem um retângulo de arestas paralelas aos eixos, verifique se o outro
ponto está ou não dentro do retângulo.
*/

#include <stdio.h>

struct Ponto {
    float x;
    float y;
};

int main() {
    struct Ponto p1, p2, p3;

    // --- LEITURA DOS PONTOS ---
    printf("--- Ponto 1 (Vértice 1 do Retângulo) ---\n");
    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);

    printf("\n--- Ponto 2 (Vértice Oposto do Retângulo) ---\n");
    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    printf("\n--- Ponto 3 (Ponto a ser verificado) ---\n");
    printf("x3: ");
    scanf("%f", &p3.x);
    printf("y3: ");
    scanf("%f", &p3.y);

    // --- DEFINIÇÃO DOS LIMITES DO RETÂNGULO ---
    float x_min = (p1.x < p2.x) ? p1.x : p2.x;
    float x_max = (p1.x > p2.x) ? p1.x : p2.x;

    float y_min = (p1.y < p2.y) ? p1.y : p2.y;
    float y_max = (p1.y > p2.y) ? p1.y : p2.y;

    // --- VERIFICAÇÃO ---
    // Considerando inclusive as bordas do retângulo
    if (p3.x >= x_min && p3.x <= x_max && p3.y >= y_min && p3.y <= y_max) {
        printf("\nO ponto P3 (%.2f, %.2f) ESTÁ DENTRO do retângulo.\n", p3.x, p3.y);
    } else {
        printf("\nO ponto P3 (%.2f, %.2f) NÃO está dentro do retângulo.\n", p3.x, p3.y);
    }

    return 0;
}