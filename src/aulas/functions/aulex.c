/*
    Ler um número inteiro e esperar uma função que retorna 
    0 se o número é par ou 1 se o número é impar
*/

#include <stdio.h>

int binTest(int n){
    return (n % 2 == 0) ? 0 : 1;
}

int main(){
    int n = 0;
    int bt;
    while (n != -1){
        printf("Digite um numero inteiro (-1 para sair): ");
        scanf("%d", &n);

        if (n == -1){
            printf("Encerrando o programa...");
            break;
        }

        bt = binTest(n);

        printf("%s\n\n", (bt == 0) ? "O numero e par" : "O numero e impar");
    }
    return 0;
}