/*
12 – Considere que em um sistema, o login do usuário é criado compondo as letras iniciais do nome do usuário
mais o ano e semestre da data. Por exemplo, se o nome do usuário for José Frederico Marques Dias e a data
01/08/2024, o login será: JFMD202402. Desenvolva um algoritmo para ler o nome do usuário, a data e gerar o
login do usuário.
*/

#include <stdio.h>

int main(){
	char nome[150], semestre[1], ano[4];
	char senha[20];

	printf("Digite seu nome: ");
	fgets(nome, 150, stdin);

	printf("Digite o numero do semestre (1 ou 2): ");
	scanf("%c", semestre);

	printf("Digite o ano: ");
	fgets(ano, 4, stdin);

	return 0;
}