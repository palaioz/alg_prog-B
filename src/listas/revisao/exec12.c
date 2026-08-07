/*
12 – Considere que em um sistema, o login do usuário é criado compondo as letras iniciais do nome do usuário
mais o ano e semestre da data. Por exemplo, se o nome do usuário for José Frederico Marques Dias e a data
01/08/2024, o login será: JFMD202402. Desenvolva um algoritmo para ler o nome do usuário, a data e gerar o
login do usuário.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char nome[150], login[50] = "";
	int dia, mes, ano;
	int i, j = 0;
	int semestre;

	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);

	printf("Digite a data (dd/mm/aaa): ");
	scanf("%d/%d/%d", &dia, &mes, &ano);

	if (nome[0] != ' ' && nome[0] != '\n' && nome[0] != '\0'){
		login[j] = toupper(nome[0]);
		j++;
	}

	for (i = 0; nome[i] != '\0'; i++){
		if (nome[i] == ' ' && nome[i+1] != ' ' && nome[i+1] != '\n' && nome[i+1] != '\0'){
			login[j] = toupper(nome[i+1]);
			j++;
		}
	}
	
	if (mes > 6){
		semestre = 2;
	} else {
		semestre = 1;
	}

	login[j++] = (ano/1000) + '0';
	login[j++] = ((ano/100) % 10) + '0';
	login[j++] = ((ano/10) % 10) + '0';
	login[j++] = (ano % 10) + '0';

	login[j++] = (semestre / 10) + '0';
	login[j++] = (semestre % 10) + '0';

	login[j] = '\0';

	printf("Login gerado: %s\n", login);
	
	return 0;
}