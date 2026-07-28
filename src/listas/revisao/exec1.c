/*
1 – Escrever um algoritmo para ler o código de um vendedor de uma empresa, seu salário fixo e o total de
vendas efetuadas por ele. Cada vendedor recebe um salário fixo, mais uma comissão proporcional às vendas
efetuadas por ele. A comissão é de 3% sobre o total de vendas até R$1.000,00; 5% de R$1.000,00 à R$2.000,00
e 10% para vendas acima de R$2.000,00. Escrever o código do vendedor, o total de suas vendas, seu salário
fixo e seu salário total.
*/

#include <stdio.h>
// #include <string.h>

int main(){
    float salario, comissao, comissao_perc, receita_mes, total_vendas;
	char codigo_vendedor[100];

	printf("---CALCULO DE SALARIO ---");
	printf("\nDigite o codigo do vendedor: ");
	// fgets(codigo_vendedor, sizeof(codigo_vendedor), stdin);
	scanf("%s", codigo_vendedor);

	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);

	printf("Digite o valor em vendas no mes: ");
	scanf("%f", &total_vendas);

	if(total_vendas < 1000){
		comissao_perc = 0.03;
	} else if (total_vendas >= 1000 && total_vendas < 2000){
		comissao_perc = 0.05;
	} else if (total_vendas >= 2000){
		comissao_perc = 0.1;
	}

    comissao = total_vendas * comissao_perc;

	receita_mes = salario + comissao;

	printf("\n--- RESULTADO ---");
	printf("\nCodigo do vendedor: %s", codigo_vendedor);
	printf("\nSalario = R$%.2f", salario);
	printf("\nComissao = R$%.2f", comissao);
	printf("\nReceita do mes = R$%.2f", receita_mes);

    return 0;
}