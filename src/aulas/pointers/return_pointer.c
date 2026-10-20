// Ponteiro: variável que armazena o endereço de 
// memória de outra variável

#include <stdio.h>

int *maxValue(int *pa, int *pb) {
    if (*pa > *pb) {
        return pa;
    } else {
        return pb;
    }
}

int main() {
    int a, b, *pmaior;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    pmaior = maxValue(&a, &b);

    printf("Maior valor: %d", *pmaior);
    
    return 0;
}