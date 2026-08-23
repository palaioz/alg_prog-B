/*
2. A loja VendeTudo possui 50 clientes. O gerente, para cada cliente, necessita armazenar o nome,
cidade onde mora, o total da compra e o mês que o cliente comprou. Desenvolva o programa
para ler e mostrar os dados.
*/

#include <stdio.h>
#include <string.h>

#define TAM 3

struct Cliente{
	char nome[100];
	char cidade[100];
	float total_compra;
	int mes_compra;
};

int main(){
	struct Cliente clientes[TAM];
	int i;

	// --- LEITURA DOS DADOS ---
	printf("====== CADASTRO VendeTudo ======\n");
	for (i = 0; i < TAM; i++) {
		printf("\n--- Cliente %d ---\n", i + 1);

		printf("Nome do cliente: ");
		fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
		clientes[i].nome[strcspn(clientes[i].nome, "\n")] = '\0';
	
		printf("Cidade: ");
		fgets(clientes[i].cidade, sizeof(clientes[i].cidade), stdin);
		clientes[i].cidade[strcspn(clientes[i].cidade, "\n")] = '\0';
	
		printf("Total da compra: ");
		scanf("%f", &clientes[i].total_compra);
	
		printf("Mes da compra (1-12): ");
		scanf("%d", &clientes[i].mes_compra);

		getchar();
	}

	// --- EXIBIÇÃO DOS DADOS ---
	printf("\n\n====== RELATORIO DE CLIENTES ======\n");
	for (i = 0; i < TAM; i++){
		printf("\nCliente %d", i + 1);
		printf("\nNome: %s", clientes[i].nome);
		printf("\nCidade %s", clientes[i].cidade);
		printf("\nTotal da Compra: R$ %.2f", clientes[i].total_compra);
		printf("\nMes da compra: %d\n", clientes[i].mes_compra);
		printf("-----------------------------------");
	}

	return 0;
}