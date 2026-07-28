#include <stdio.h>

int main(){

    int v[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(v) / sizeof(v[0]); // Resultado: 5 elementos


    // for (int i = 0; i < tamanho; i++){
    //     v[i] = i + 20;
    // }

    printf("O vetor possui %d elementos", v, tamanho);
    for (int i = 0; i < tamanho; i++){
        printf("\nElemento %d = %d", i, v[i]);
    }

    return 0;
}