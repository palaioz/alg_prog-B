/*
2. A loja VendeTudo possui 50 clientes. O gerente, para cada cliente, necessita armazenar o nome,
cidade onde mora, o total da compra e o mês que o cliente comprou. Desenvolva o programa
para ler e mostrar os dados.
*/

#include <stdio.h>
#include <string.h>

int main(){
	struct Cliente{
		char nome[100];
		char cidade[100];
		float total_compra;
		int mes_compra;
	};

	struct Cliente c;

	printf("\n=== CAIXA VENDETUDO ===");
	printf("\nNome do cliente: ");
	fgets(c.nome, sizeof(c.nome), stdin);
	c.nome[strcspn(c.nome, "\n")] = '\0';

	printf("\nCidade: ");
	fgets(c.cidade, sizeof(c.cidade), stdin);
	c.cidade[strcspn(c.cidade, "\n")] = '\0';

	printf("\nTotal da compra: ");
	scanf("%f", &c.total_compra);

	printf("\nMes da compra (int): ");
	scanf("%d", &c.mes_compra);

	printf("\n\n=== NOTA ===");
	printf("\n%s: %s | %.2f | %d", c.nome, c.cidade, c.total_compra, c.mes_compra);

	return 0;
}