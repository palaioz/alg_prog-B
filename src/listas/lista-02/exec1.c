/*
1. Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e em uma
função mostre-a expressa apenas em dias.
*/

#include <stdio.h>

void ageInDays(int anos, int meses, int dias){
	dias += (meses * 30) + (anos * 365);
	printf("%d dias", dias);
}

int main(){
	int anos, meses, dias;

	printf("\nAnos: ");
	scanf("%d", &anos);
	printf("Meses: ");
	scanf("%d", &meses);
	printf("Dias: ");
	scanf("%d", &dias);

	ageInDays(anos, meses, dias);

	return 0;
}