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
	float lista_salarios[10], lista_ajustes[10];
	char lista_codigos[10];
	
	printf("--- REAJUSTE SALARIAL 2026 ---");
	
	// INPUT
	for (int i = 0; i < 10; i++)
	{
		printf("Digite o codigo do funcionario: ");
		scanf("%s", &lista_codigos[i]);

		printf("Digite o salario do funcionario: ");
		scanf("%f", &lista_salarios[i]);

		if (lista_salarios[i] < 10000){
			lista_ajustes[i] = 0.2;
		} else if (lista_salarios[i] >= 10000 && lista_salarios < 25000){
			lista_ajustes[i] = 0.06;
		} else if (lista_salarios[i] >= 25000{
			lista_ajustes[i] = 0.03;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (lista_salarios[i] < 10000){

		}
	}

	printf("\n--- REAJUSTES ---");
	for (int i = 0; i < 10; i++)
	{
		printf("\nCodigo: %s", lista_codigos[i]);
		printf("Percentual do reajuste: %d%%", )
	}
	return 0;
}