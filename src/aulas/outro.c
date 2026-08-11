#include <stdio.h>

#define N 3

struct Cliente{
    char nome[50];
    char cidade[30];
    float compra;
    int mes;
};

int main(){
    struct Cliente c[N];
    int i;

    for(i = 0; i < N; i++){
        printf("Cliente %d: ", i+1);
        fgets(c[i].nome, sizeof(c[i].nome), stdin);
    }
    

    return 0;
}