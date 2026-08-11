/*
1. Escreva um programa que faça o controle das informações relativas aos funcionários de uma
determinada empresa. As informações que devem ser armazenadas são: Nome, Salário, Cargo e
Idade. Defina a estrutura de dados e faça a leitura e exibição dos dados para um funcionário.
*/

#include <stdio.h>
#include <string.h>

struct Funcionario {
	char nome[150];
	float salario;
	char cargo[50];
	int idade;
};

int main(){

	float total_salario = 0;
	
	struct Funcionario f[3];
	
	for(int i = 0; i < 3; i++){
		fflush(stdin);
		printf("\nNome: ");
		fgets(f[i].nome, sizeof(f[i].nome), stdin);
		f[i].nome[strcspn(f[i].nome, "\n")] = '\0';
	
		printf("\nSalario: ");
		scanf("%f", &f[i].salario);
		total_salario += f[i].salario;
	
		int c;
		while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer
	
		printf("\nCargo: ");
		fgets(f[i].cargo, sizeof(f[i].cargo), stdin);
		f[i].cargo[strcspn(f[i].cargo, "\n")] = '\0';
	
		printf("\nIdade: ");
		scanf("%d", &f[i].idade);
	}

	// Exibição dos dados lidos
	printf("\n===================\n");

	for(int i = 0; i < 3; i++){
		printf("\n=== FICHA FUNCIONARIO %d ===\n", i);
		printf("Nome: %s", f[i].nome);
		printf("\nSalario: %.0f", f[i].salario);
		printf("\nCargo: %s", f[i].cargo);
		printf("\nIdade: %d", f[i].idade);
		printf("\n");
	}
	printf("\nSalarios totais: %.2f", total_salario);
	printf("\nMedia dos salarios: %.2f", total_salario/3);
	return 0;
}