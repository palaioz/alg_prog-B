/*
8. Escrever um programa que leia duas datas no formato dd/mm/aaaa e verifique qual data ocorre
primeiro. Use estruturas para armazenar os dados. Também é necessário o uso da função atoi()
que converte uma string em um número inteiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

struct tipoData {
	int dia;
	int mes;
	int ano;
}; 

struct tipoData lerData(const char* mensagem) {
	/* 
		Função para ler a string e preencher a estrutura tipoData usando atoi()
	*/

	struct tipoData d;
	char dataLida[12];
	char aux[5];

	printf("%s", mensagem);
	scanf("%11s", dataLida);

	// Convertendo o dia
	aux[0] = dataLida[0];
	aux[1] = dataLida[1];
	aux[2] = '\0';
	d.dia = atoi(aux);
	
	// Convertendo o mês
	aux[0] = dataLida[3];
	aux[1] = dataLida[4];
	aux[2] = '\0';
	d.mes = atoi(aux);
	
	// Convertendo o ano
	aux[0] = dataLida[6];
	aux[1] = dataLida[7];
	aux[2] = dataLida[8];
	aux[3] = dataLida[9];
	aux[4] = '\0';
	d.ano = atoi(aux);

	return d;
}

int compararDatas(struct tipoData d1, struct tipoData d2) {
	/*
		Função para comparar duas datas
		Retorna: -1 se d1 < d2, 1 se d1 > d2, 0 se forem iguais
	*/

	if (d1.ano != d2.ano){
		return (d1.ano < d2.ano) ? -1 : 1;
	}
	if (d1.mes != d2.mes){
		return (d1.mes < d2.mes) ? -1 : 1;
	}
	if (d1.dia != d2.dia){
		return (d1.dia < d2.dia) ? -1 : 1;
	}
	return 0;
}

int main(){
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	printf("\n=====================================\n");
	printf("\tCOMPARAÇÃO DE DATAS");
	printf("\n=====================================\n");

	struct tipoData data1 = lerData("Digite a primeira data (dd/mm/aaaa): ");
	struct tipoData data2 = lerData("Digite a segunda data (dd/mm/aaaa): ");

	int resultado = compararDatas(data1, data2);

	if (resultado < 0){
		printf("\nA primeira data (%02d/%02d/%d) ocorre primeiro.\n", data1.dia, data1.mes, data1.ano);
	} else if (resultado > 0){
		printf("\nA segunda data (%02d/%02d/%d) ocorre primeiro.\n", data2.dia, data2.mes, data2.ano);
	} else {
		printf("\nAs duas datas são iguais(%02d/%02d/%d).\n", data1.dia, data1.mes, data1.ano);
	}
	
	return 0;
}