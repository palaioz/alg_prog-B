/*
11. Desenvolva um programa para ler o preço de um produto (em reais), a sua unidade (kilo, litro,
metro…) e a quantidade vendida. Desenvolva funções para: calcular o valor total a ser pago;
calcular o valor de desconto, conforme a seguinte regra:
	◦ Se valor total for maior ou igual a R$ 1.000,00, o desconto é de 10%.
	◦ Se o valor total for maior ou igual a R$ 500,00 e menor que R$ 1.000,00, o desconto é
	de 8%.
	◦ Se o valor total for maior ou igual a R$ 100,00 e menor que R$ 500,00, o desconto é de
	5%.
	◦ Para valor total menor que R$ 100,00, não haverá desconto.
Ao término do programa, a função main deve mostrar o preço do produto, a unidade, a
quantidade vendida, o valor total, o valor do desconto (em % e em reais) e o valor a ser pago (valor
total – desconto). 
*/

#include <stdio.h>

// --- DECLARAÇÃO DAS FUNÇÕES --- 

float calcularTotalBruto(float preco, float quantidade) {
    return preco * quantidade;
}

float calcularPercentualDesconto(float totalBruto) {
    if (totalBruto >= 1000.0) {
        return 10.0;
    } else if (totalBruto >= 500.0) {
        return 8.0;
    } else if (totalBruto >= 100.0) {
        return 5.0;
    } else {
        return 0.0;
    }
}

// --- CÓDIGO PRINCIPAL --- 

int main(){
	float preco = 0.0, quantidade = 0.0;
    char unidade[20];

    printf("\n=== SISTEMA DE VENDAS ===\n");
    printf("Digite o preco unitario do produto (R$): ");
    scanf("%f", &preco);

    printf("Digite a unidade de medida (ex: kilo, litro metro, un): ");
    scanf(" %19s", unidade);

    printf("Digite a quantidade vendida (%s): ", unidade);
    scanf("%f", &quantidade);

    if (preco <= 0 || quantidade <= 0) {
        printf("\nERRO: Preco e quantidade devem ser valores maiores que zero.\n");
        return 1;
    }

    float valorTotal = calcularTotalBruto(preco, quantidade);
    float pctDesconto = calcularPercentualDesconto(valorTotal);

    float valorDescontoEmReais = valorTotal * (pctDesconto / 100.0);
    float valorFinalAPagar = valorTotal - valorDescontoEmReais;

    printf("\n================ RESUMO DA COMPRA ================\n");
    printf("Preco do produto:       R$ %.2f por %s\n", preco, unidade);
    printf("Quantidade vendida:     %.2f %s(s)\n", quantidade, unidade);
    printf("----------------------------------------------\n");
    printf("Valor Total Bruto:      R$ %.2f\n", valorTotal);
    printf("Desconto Aplicado:      %.1f%% (R$ %.2f)\n", pctDesconto, valorDescontoEmReais);
    printf("----------------------------------------------\n");
    printf("Valor a ser Pago:       R$ %.2f\n", valorFinalAPagar);
    printf("==============================================\n\n");

	return 0;
}
