/*
7. Fazer um programa que leia uma string no formato hh:mm:ss, converta os elementos desta
strings em inteiros armazenando-os em uma estrutura e mostre o resultado na seguinte forma:
“hh hora(s), mm minuto(s) e ss segundo(s).” Para esta questão, utilize a função atoi() que
converte uma string em um número inteiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

struct tipoHorario {
	int h;
	int min;
	int seg;
};

int main(){
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "pt_BR.UTF-8");

	struct tipoHorario hora; 
	char horaLida[10];
	char aux[3];

	typedef struct {
		int h; 
		int min; 
		int seg; 
	} tipoHorario;

	printf("Digite um horario (hh:mm:ss): ");
	scanf("%s", horaLida);

	// Convertendo a hora
	aux[0] = horaLida[0];
	aux[1] = horaLida[1];
	aux[2] = '\0';
	printf("aux = %s\n", aux);

	hora.h = atoi(aux);
	printf("Hora = %02d\n", hora.h);
	
	// Convertendo os minutos
	aux[0] = horaLida[3];
	aux[1] = horaLida[4];
	printf("aux = %s\n", aux);
	
	hora.min = atoi(aux);
	printf("Minutos = %d\n", hora.min);
	
	// Convertendo os segundos
	aux[0] = horaLida[6];
	aux[1] = horaLida[7];
	printf("aux = %s\n", aux);
	
	hora.seg = atoi(aux);
	printf("Segundos = %d\n", hora.seg);

	// Frase
	printf("\n%02d hora(s), %d minuto(s) e %d segundo(s).", hora.h, hora.min, hora.seg);

	return 0;
}