/*
8. Escrever um programa que leia duas datas no formato dd/mm/aaaa e verifique qual dada ocorre
primeiro. Use estruturas para armazenar os dados. Também é necessário o uso da função atoi()
que converte uma string em um número inteiro.
*/

#include <stdio.h>
#include <stdlib.h>

struct tipoData {
	int dia;
	int mes;
	int ano;
};

int main(){
	struct tipoData data;
	char dataLida[12];
	char aux[5];
	
	typedef struct {
		int dia;
		int min; 
		int seg;
	} tipoData;

	printf("Digite uma data (dd/mm/aaaa): ");
	scanf("%s", dataLida);

	// Convertendo o dia
	aux[0] = dataLida[0];
	aux[1] = dataLida[1];
	aux[2] = '\0';
	printf("aux = %s\n", aux);

	data.dia = atoi(aux);
	printf("Dia = %02d\n", data.dia);
	
	aux[0] = dataLida[3];
	aux[1] = dataLida[4];
	aux[2] = '\0';
	printf("aux = %s\n", aux);
	
	data.mes = atoi(aux);
	printf("Mes = %02d\n", data.mes);

	aux[0] = dataLida[6];
	aux[1] = dataLida[7];
	aux[2] = dataLida[8];
	aux[3] = dataLida[9];
	aux[4] = '\0';
	printf("aux = %s\n", aux);

	data.ano = atoi(aux);
	printf("Ano = %02d\n", data.ano);

	// Frase
	printf("\nDia %02d, mes %02d de %04d.", data.dia, data.mes, data.ano);

	
	return 0;
}