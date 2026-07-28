/*
2 – Escreva um algoritmo para calcular o reajuste salarial de uma empresa que possui 10 funcionários, de
acordo com os seguintes critérios:
 os funcionários com salário inferior a 10.000 devem receber 20% de reajuste
 os funcionários com salário entre 10.000 e 25.000 devem receber 6% de reajuste.
 os funcionários com salário acima de 25.000 devem receber 3% de reajuste.
*/

#include <stdio.h>

int main(){
	// int qntd_funcionarios = 10;
	float salarios_antigos[10], salarios_novos[10], lista_ajustes[10];
	char lista_codigos[10];
	
	printf("--- REAJUSTE SALARIAL 2026 ---");
	
	
	for (int i = 0; i < 10; i++)
	{
		printf("\nDigite o codigo do funcionario: ");
		scanf("%s", &lista_codigos[i]);

		printf("\nDigite o salario do funcionario: ");
		scanf("%f", &salarios_antigos[i]);

		if (salarios_antigos[i] < 10000){
			lista_ajustes[i] = 0.2;
		} else if (salarios_antigos[i] >= 10000 && salarios_antigos[i] < 25000){
			lista_ajustes[i] = 0.06;
		} else if (salarios_antigos[i] >= 25000){
			lista_ajustes[i] = 0.03;
		}

		salarios_novos[i] = salarios_antigos[i] + (salarios_antigos[i] * lista_ajustes[i]);
	}
	


	printf("\n--- REAJUSTES ---");
	for (int i = 0; i < 10; i++)
	{
		printf("\nCodigo: %s", lista_codigos[i]);
		printf("\nPercentual do reajuste: %d%%", lista_ajustes[i] * 100);
		printf("\nSalario antigo: R$%.2f", salarios_antigos[i]);
		printf("\nNovo salario: R$%.2f", salarios_novos[i]);
	}

	return 0;
}