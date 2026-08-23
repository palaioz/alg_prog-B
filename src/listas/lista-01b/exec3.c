/*
3. Estenda a solução da questão 2, para armazenar os dados de todas as turmas ofertadas no
semestre. Considere que no máximo são ofertadas 32 turmas.
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

#define MAX_TURMAS 32
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
    float media_frequencia;
};

int main() {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct Turma turmas[MAX_TURMAS];
    int total_turmas = 0;
    char opt_turma, opt_aluno;
    int i, j, c;

    printf("===================================\n");
    printf("\tGESTÃO DE TURMAS DO SEMESTRE\n");
    printf("===================================\n");

    // --- LEITURA DAS TURMAS ---
    do {
        printf("\n>>> CADASTRANDO TURMA %d <<<\n", total_turmas + 1);

        printf("Código da turma: ");
        scanf("%d", &turmas[total_turmas].codigo);

        while ((c = getchar()) != '\n' && c != EOF);

        printf("Nome da disciplina: ");
        fgets(turmas[total_turmas].disciplina, sizeof(turmas[total_turmas].disciplina), stdin);
        turmas[total_turmas].disciplina[strcspn(turmas[total_turmas].disciplina, "\n")] = '\0';

        printf("Carga horária (em horas): ");
        scanf("%d", &turmas[total_turmas].carga_horaria);

        while ((c = getchar()) != '\n' && c != EOF);

        printf("Nome do professor: ");
        fgets(turmas[total_turmas].professor, sizeof(turmas[total_turmas].professor), stdin);
        turmas[total_turmas].professor[strcspn(turmas[total_turmas].professor, "\n")] = '\0';

        // --- LEITURA DOS ALUNOS DA TURMA ---
        turmas[total_turmas].qtd_alunos = 0;
        float soma_frequencias = 0.0f;

        printf("\n--- Alunos da Turma %s ---\n", turmas[total_turmas].disciplina);

        do {
            int pos_aluno = turmas[total_turmas].qtd_alunos;
            
            printf("Aluno %d - Matrícula: ", pos_aluno + 1);
            scanf("%d", &turmas[total_turmas].alunos[pos_aluno].matricula);

            printf("Quantidade de presenças (horas): ");
            scanf("%d", &turmas[total_turmas].alunos[pos_aluno].presencas);

            // Cálculo individual da frequência
            turmas[total_turmas].alunos[pos_aluno].perc_frequencia = 
                ((float)turmas[total_turmas].alunos[pos_aluno].presencas / (float)turmas[total_turmas].carga_horaria) * 100.0f;

            soma_frequencias += turmas[total_turmas].alunos[pos_aluno].perc_frequencia;
            turmas[total_turmas].qtd_alunos++;

            if (turmas[total_turmas].qtd_alunos < MAX_ALUNOS) {
                printf("Deseja cadastrar outro aluno nesta turma? (S/N): ");
                scanf(" %c", &opt_aluno);
            } else {
                printf("\n[Aviso] Limite de %d alunos atingido para esta turma.\n", MAX_ALUNOS);
                break;
            }

        } while ((opt_aluno == 'S' || opt_aluno == 's') && turmas[total_turmas].qtd_alunos < MAX_ALUNOS);

        // Média geral da turma
        turmas[total_turmas].media_frequencia = (turmas[total_turmas].qtd_alunos > 0) ? 
                                                 (soma_frequencias / turmas[total_turmas].qtd_alunos) : 0.0f;

        total_turmas++;

        if (total_turmas < MAX_TURMAS) {
            printf("\nDeseja cadastrar outra TURMA no semestre? (S/N): ");
            scanf(" %c", &opt_turma);
        } else {
            printf("\n[Aviso] Limite de %d turmas atingido para o semestre.\n", MAX_TURMAS);
            break;
        }

    } while ((opt_turma == 'S' || opt_turma == 's') && total_turmas < MAX_TURMAS);

    // --- RELATÓRIO GERAL DO SEMESTRE ---
    printf("\n\n==================================================");
    printf("\n\tRELATÓRIO GERAL DE TURMAS DO SEMESTRE");
    printf("\n==================================================");

    for (i = 0; i < total_turmas; i++) {
        printf("\n\n--------------------------------------------------");
        printf("\nTURMA %d: %s (Código: %d)", i + 1, turmas[i].disciplina, turmas[i].codigo);
        printf("\nProfessor: %s | Carga Horária: %dh", turmas[i].professor, turmas[i].carga_horaria);
        printf("\nAlunos Matriculados: %d", turmas[i].qtd_alunos);
        printf("\n--------------------------------------------------");
        printf("\n%-15s | %-12s | %-12s", "Matrícula", "Presenças", "Frequência");
        printf("\n--------------------------------------------------");

        for (j = 0; j < turmas[i].qtd_alunos; j++) {
            printf("\n%-15d | %-2dh / %-2dh   | %.2f%%", 
                   turmas[i].alunos[j].matricula, 
                   turmas[i].alunos[j].presencas, 
                   turmas[i].carga_horaria, 
                   turmas[i].alunos[j].perc_frequencia);
        }

        printf("\n--------------------------------------------------");
        printf("\nFrequência Média da Turma: %.2f%%", turmas[i].media_frequencia);
    }

    printf("\n==================================================\n");

    return 0;
}