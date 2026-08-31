/*
5. Escreva um programa que leia o preço de um produto, em reais, e o percentual de desconto.
Faça uma função para calcular e retornar o valor do desconto em reais.
*/

#include <stdio.h>

float descontoProduto(float p, float d){
    return p * (d / 100.0);
}

int main(){
    float preco = 0.0, desconto = 0.0;

    printf("\n=== DESCONTO DO PRODUTO ====\n");
    printf("\nDigite o valor do produto [R$] (ex: 100.00): ");
    scanf("%f", &preco);

    printf("\nDigite o valor do desconto [%%] (ex: 20): ");
    scanf("%f", &desconto);

    float valor_desconto = descontoProduto(preco, desconto);
    float preco_final = preco - valor_desconto;

    printf("\n--- RESUMO ---");
    printf("\nValor original:       R$ %.2f", preco);
    printf("\nValor do desconto:    R$ %.2f (%.1f%%)", valor_desconto, desconto);
    printf("\nValor com desconto:   R$ %.2f\n", preco_final);

	return 0;
}
