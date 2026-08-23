/*
2. Desenvolva um algoritmo para controlar os dados de uma turma ofertada em um determinado
semestre, para a graduação em Ciência da Computação. A turma possui: código (inteiro), nome
da disciplina (até 50 caracteres), carga horária em horas (inteiro), nome do professor (até 60
caracteres), até 40 alunos (um vetor para armazenar a matrícula de cada aluno da turma) e a
quantidade de presenças de cada aluno. Leia os dados da turma e, posteriormente, apresente:
    i. Os dados da turma (código, nome disciplina, carga horária e professor).
    ii. A quantidade de alunos matriculados na turma.
    iii. A matrícula de cada aluno e seu percentual de frequência.
    iv. O valor médio da frequência dos alunos da turma.
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

#define MAX_ALUNOS 40

struct Aluno {
    int matricula;
    int presencas;
    float perc_frequencia;
};

struct Turma {
    int codigo;
    char disciplina[50];
    int carga_horaria;
    char professor[60];
    struct Aluno alunos[MAX_ALUNOS];
    int qtd_alunos;
};

int main() {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct Turma t;
    int i;
    char opcao;
    float soma_frequencias = 0.0f;

    printf("===================================\n");
    printf("\tCADASTRO DE TURMA\n");
    printf("===================================\n");

    // --- LEITURA DOS DADOS DA TURMA ---
    printf("Código da turma: ");
    scanf("%d", &t.codigo);

    // Limpeza de buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Nome da disciplina: ");
    fgets(t.disciplina, sizeof(t.disciplina), stdin);
    t.disciplina[strcspn(t.disciplina, "\n")] = '\0';

    printf("Carga horária (em horas): ");
    scanf("%d", &t.carga_horaria);

    while ((c = getchar()) != '\n' && c != EOF);

    printf("Nome do professor: ");
    fgets(t.professor, sizeof(t.professor), stdin);
    t.professor[strcspn(t.professor, "\n")] = '\0';

    // --- LEITURA DOS ALUNOS DA TURMA ---
    t.qtd_alunos = 0;
    printf("\n--- Leitura dos Alunos ---\n");

    do {
        printf("\nAluno %d:\n", t.qtd_alunos + 1);

        printf("Matrícula (inteiro): ");
        scanf("%d", &t.alunos[t.qtd_alunos].matricula);

        printf("Quantidade de presenças (em horas): ");
        scanf("%d", &t.alunos[t.qtd_alunos].presencas);

        // Cálculo da frequência individual
        t.alunos[t.qtd_alunos].perc_frequencia = 
            ((float)t.alunos[t.qtd_alunos].presencas / (float)t.carga_horaria) * 100.0f;

        soma_frequencias += t.alunos[t.qtd_alunos].perc_frequencia;
        t.qtd_alunos++;

        if (t.qtd_alunos < MAX_ALUNOS) {
            printf("Deseja cadastrar outro aluno? (S/N): ");
            scanf(" %c", &opcao);
        } else {
            printf("\nLimite máximo de 40 alunos atingido!\n");
            break;
        }

    } while ((opcao == 'S' || opcao == 's') && t.qtd_alunos < MAX_ALUNOS);

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n\n===================================");
    printf("\n\tRELATÓRIO DA TURMA");
    printf("\n===================================");

    // Requisito i: Dados da turma
    printf("\nCódigo: %d", t.codigo);
    printf("\nDisciplina: %s", t.disciplina);
    printf("\nCarga Horária: %d hrs", t.carga_horaria);
    printf("\nProfessor: %s\n", t.professor);

    // Requisito ii: Quantidade de alunos matriculados
    printf("-----------------------------------");
    printf("\nQuantidade de alunos matriculados: %d\n", t.qtd_alunos);
    printf("-----------------------------------");

    // Requisito iii: Matrícula de cada aluno e seu percentual de frequência
    printf("\n--- FREQUÊNCIA DOS ALUNOS ---");
    for (i = 0; i < t.qtd_alunos; i++) {
        printf("\nMatrícula: %d | Presenças: %dh/%dh | Frequência: %.2f%%", 
                t.alunos[i].matricula, 
                t.alunos[i].presencas, 
                t.carga_horaria, 
                t.alunos[i].perc_frequencia);
    }

    // Requisito iv: Valor médio da frequência dos alunos da turma
    float media_frequencia_turma = (t.qtd_alunos > 0) ? (soma_frequencias / t.qtd_alunos) : 0.0f;
    printf("\n-----------------------------------");
    printf("\nFrequência Média da Turma: %.2f%%\n", media_frequencia_turma);
    printf("===================================\n");

    return 0;
}