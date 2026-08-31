/*
8. Desenvolva um programa para ler as notas 1, 2 e 3 de um estudante. Em uma função, calcule a
média aritmética do estudante.
*/

#include <stdio.h>

float mediaNotas(float a, float b, float c){
    return (a + b + c) / 3.0;
}

int main(){
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;

	printf("\n=== CALCULO DE MEDIA DO ESTUDANTE ===\n");
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
	
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10){
        printf("\nERRO: Todas as notas devem estar entre 0.0 e 10.0.\n");
        return 1;
    }

    float media = mediaNotas(nota1, nota2, nota3);

    printf("\n--- RESULTADO ---");
    printf("\nMedia final: %.2f", media);

    if (media >= 7.0) {
        printf(" (APROVADO)\n");
    } else {
        printf(" (REPROVADO/EXAME)\n");
    }

    return 0;
}
