/*
6. Desenvolva um programa, com funções para calcular a área e o perímetro de um terreno
retangular. As medidas do terreno devem ser lidas. Por fim, os valores calculados devem ser
informados ao usuário.
*/

#include <stdio.h>

// --- DECLARAÇÃO DAS FUNÇÕES --- 

float calcularArea(float largura, float comprimento){
    return largura * comprimento;
}

float calcularPerimetro(float largura, float comprimento){
    return 2 * (largura + comprimento);
}

// --- CÓDIGO PRINCIPAL --- 

int main(){
    float largura = 0.0, comprimento = 0.0;
    
    printf("\n=== CALCULADORA DE TERRENO RETANGULAR ===\n");
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);

    if (largura <= 0 || comprimento <= 0) {
        printf("\nERRO: As medidas do terreno devem ser maiores que zero.\n");
        return 1;
    }

    float area = calcularArea(largura, comprimento);
    float perimetro = calcularPerimetro(largura, comprimento);

    printf("\n--- RESULTADOS ---");
    printf("\nMedidas inseridas:    %.2fm x %.2fm", largura, comprimento);
    printf("\nArea do terreno:      %.2f m²", area);
    printf("\nPerimetro do terreno: %.2f m\n", perimetro);

	return 0;
}
