// Ponteiro: variável que armazena o endereço de 
// memória de outra variável

#include <stdio.h>

int main() {
    int a;
    int *p;

    p = &a; // inicializar o ponteiro

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("a = %d \t*p (&a) = %d\n", a, *p);
    printf("Digite um outro valor: ");
    scanf("%d", p);

    *p = 10;

    printf("\na = %d", a);

    return 0;
}
