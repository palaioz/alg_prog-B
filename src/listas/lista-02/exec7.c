/*
7. Desenvolva um programa para ler a carga horária (em horas) de uma disciplina e a quantidade
faltas de um estudante. Em uma função, calcule e retorne o percentual de frequência do
estudante. A função main exibe o percentual de frequência na tela.
*/

#include <stdio.h>

// --- DECLARAÇÃO DE FUNÇÕES --- 

float calcularFrequencia(int cargaHoraria, int faltas) {
    if (cargaHoraria <= 0){
        return 0.0;
    }

    int horasPresente = cargaHoraria - faltas;

    float frequencia = ((float)horasPresente / cargaHoraria) * 100.0;

    return frequencia;
}

// --- CÓDIGO PRINCIPAL --- 

int main(){
	int cargaHoraria = 0, faltas = 0;

    printf("\n=== CONTROLE DE FREQUENCIA ACADEMICA ===\n");
    printf("Digite a carga horaria total da disciplina (em horas): ");
    scanf("%d", &cargaHoraria);

    printf("Digite a quantidade de faltas do estudante (em horas): ");
    scanf("%d", &faltas);

    if (cargaHoraria <= 0 || faltas < 0 || faltas > cargaHoraria) {
        printf("\nERRO: Dados invalidos! As faltas nao podem ser maiores que a carga horaria.\n");
        return 1;
    }

    float pctFrequncia = calcularFrequencia(cargaHoraria, faltas);
    
    printf("\n--- RESULTADO ---");
    printf("\nCarga Horaria Total:   %d horas", cargaHoraria);
    printf("\nFaltas Registradas:    %d horas", faltas);
    printf("\nPercentual Frequencia: %.2f%%\n", pctFrequncia);
    	
    return 0;
}
