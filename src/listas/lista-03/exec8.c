/*
	8. Escreva uma função que verifique se um determinado ano é bissexto. Os anos bissextos são
	anos com um dia a mais, tendo portanto 366 dias. O dia extra é introduzido como o dia 29 de
	fevereiro, ocorrendo a cada quatro anos.  No final do século XVI foi introduzido o calendário
	Gregoriano, usado até hoje na maioria dos países, adotando as seguintes regras:
		a. Todo ano divisível por 4 é bissexto
		b. Todo ano divisível por 100 não é bissexto
		c. Mas se o ano for também divisível por 400 é bissexto
		d. Prevalece as últimas regras sobre as primeiras
	Essas regras foram introduzidas para reduzir ainda mais o erro no calendário. O ano de 2000 foi
	o primeiro a usar a terceira regra
*/

#include <stdio.h>


int eh_bissexto(int ano) {
	if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int ano;

    printf("Digite um ano para verificar: ");
    scanf("%d", &ano);

    if (eh_bissexto(ano)) {
        printf("O ano %d E bissexto (366 dias).\n", ano);
    } else {
        printf("O ano %d NAO e bissexto (365 dias).\n", ano);
    }

    return 0;
}