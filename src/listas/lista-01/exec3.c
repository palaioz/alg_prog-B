/*
3. A turma de Algoritmos e Programação B tem 17 alunos. Para cada aluno, é necessário
armazenar o nome, número de faltas (em horas), os valores das nota 1, nota 2, nota 3 e a média
final. A média das notas é a média aritmética e deve ser calculada. Após fazer a leitura dos
valores, calcule a média das notas, para cada aluno e mostre o resultado final de acordo com as
regras:
	 Para ser aprovado, o estudante deve ter 75% de frequência. Caso
	contrário, está Reprovado por Frequência.
	 Se o estudante tem 75% ou mais de frequência nas aulas, o resultado é:
		◦ Aprovado, se a média final for maior ou igual a 6,0 ou
		◦ Reprovado, se a média final for menor que 6,0
 Para calcular a frequência, considere que a disciplina tem 80 horas.
*/

#include <stdio.h>
#include <string.h>

#define N 3
#define TOTAL_HORAS 80

struct Aluno {
	char nome[150];
	int faltas;
	float frequencia;
	float nota[3];
	float media;
};

int main(){
	struct Aluno a[N];
	int i, j;

	for(i = 0; i < N; i++){
		float soma = 0;

		if (i > 0) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }

		printf("--- Aluno %d ---\n", i+1);
		printf("\nNome: ");
		fgets(a[i].nome, sizeof(a[i].nome), stdin);
		a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

		printf("\nFalta (em horas): ");
		scanf("%d", &a[i].faltas);

		for(j = 0; j < 3; j++){
			printf("\nNota %d: ", j+1);
			scanf("%f", &a[i].nota[j]);
			soma += a[i].nota[j];
		}

		a[i].media = soma / 3.0;

		a[i].frequencia = ((float)(TOTAL_HORAS - a[i].faltas)*100.0) / TOTAL_HORAS;
	}

	printf("\n=== CLASSE ===\n");
	for(i = 0; i < N; i++){
		printf("\nNome: %s", a[i].nome);
		printf("\nMedia final: %.1f", a[i].media);
		printf("\nFrequencia = %.2f%%", a[i].frequencia);

		if (a[i].frequencia < 75.0){
			printf("\nSituacao: Reprovado por Frequencia.\n");
		} else {
			if (a[i].media >= 6.0){
				printf("\nSituacao: Aprovado.\n");
			} else {
				printf("\nSituacao: Reprovado.\n");
			}
		}
		printf("-----------------------");
	}
	
	return 0;
}