/*
    Ler ou gerar um vetor inteiro de 10 elementos. Definir funções e usá-las para:
        - Calcular o somatório do vetor
        - Encontrar o maior valor do vetor
        - Ler 1 número e multiplicar o vetor pelo número lido
        - Mostrar o vetor
*/

#include <stdio.h>

#define TAM 10

// --- FUNÇÕES ---

// Calcular o somatório do vetor
int sumVector(int v[], int size){
    int total = 0;
    for (int i = 0; i < size; i++){
        total += v[i];
    }

    return total;
}

// Encontrar o maior valor do vetor
int highValue(int v[], int size){
    int high = v[0];
    for (int i = 0; i < size; i++){
        if (v[i] > high){
            high = v[i];
        }
    }

    return high;
}

// Multiplicar o vetor pelo número lido (modifica o vetor original)
void multVector(int v[], int size, int k){
    for (int i = 0; i < size; i++){
        v[i] = v[i] * k; 
    }
}

// Mostrar o vetor
void showVector(int v[], int size){
    for (int i = 0; i < size; i++){
        printf("\nVector[%d] == %d", i, v[i]);
    }
}


// --- CÓDIGO PRINCIPAL ---
int main(){
    int vector[TAM];
    int k;

    for(int i = 0; i < TAM; i++){
        printf("Digite o valor de vector[%d]: ", i);
        scanf("%d", &vector[i]);
    }

    printf("\n==================================");
    printf("\nVETOR ORIGINAL:\n");
    showVector(vector, TAM);
    printf("\n==================================");
    
    printf("\nSoma do vetor: %d", sumVector(vector, TAM));
    printf("\nMaior numero do vetor: %d", highValue(vector, TAM));

    printf("\nDigite um numero 'k' para multiplicar o vetor: ");
    scanf("%d", &k);
    
    multVector(vector, TAM, k);

    printf("\n==================================");
    printf("\nVETOR APOS MULTIPLICADO (por %d):\n");
    showVector(vector, TAM);
    printf("\n==================================");
    
    return 0;
}