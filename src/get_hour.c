#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

struct tipoHorario {
	int h;
	int min;
	int seg;
};

int main(){
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "pt_BR.UTF-8");

	struct tipoHorario hora; 

    while (1){
        time_t tempoAtual;
        time(&tempoAtual);

        struct tm *infoTempo = localtime(&tempoAtual);
        
        hora.h = infoTempo->tm_hour;
        hora.min = infoTempo->tm_min;
        hora.seg = infoTempo->tm_sec;

        system("cls");

        printf("=== RELÓGIO DO PC ===\n");
        printf("\n%02d:%02d:%02d\n", hora.h, hora.min, hora.seg);
        printf("\n%02d hora(s), %02d minuto(s) e %02d segundo(s).\n", hora.h, hora.min, hora.seg);
        printf("\nPressione Ctrl + C para sair.");

        Sleep(1000);
    }
	return 0;
}