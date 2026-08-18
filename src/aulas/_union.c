#include <stdio.h>

#define PI 3.14159265

union angulo {
    float graus;
    float radianos;
};

void main(void){
    union angulo ang;
    float auxGrau;
    char op;

    printf("\nNumeros em graus (G) ou radianos (R)? ");
    scanf("%c", &op);

    printf("Digite o angulo: ");
    scanf("%f", &auxGrau);

    if (op == 'G') {
        printf("Angulo digitado em graus %.2f\n", auxGrau);
        ang.radianos = auxGrau * PI / 180;
        printf("\nAngulo em radianos: %.2f\n", ang.radianos);
    } else if (op == 'R') {
        printf("Angulo digiado em radianos %.2f\n", auxGrau);
        ang.graus = auxGrau * 180 / PI;
        printf("\nAngulo em graus: %.2f\n", ang.graus);
    } else {
        printf("\nEntrada invalida !!\n");
    }

    return;
}