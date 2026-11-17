#include<stdio.h>
#include<string.h>

struct aluno {
    char nome[80];
    char curso[60];
    int anoIngresso;
    int anoFormatura;
};

void lerAluno(struct aluno *p){
    printf("Nome: ");
    fflush(stdin);
    gets(p->nome);
    printf("Curso: ");
    fflush(stdin);
    gets(p->curso);
    printf("Ano de ingresso: ");
    scanf("%d", &p->anoIngresso);
    printf("Previsão de formatura em: ");
    scanf("%d", &p->anoFormatura);
    return ;
}

int main(){
    struct aluno a, *ptr;

    ptr = (struct aluno *) malloc(sizeof(struct aluno));

    if(!ptr) {
        printf("Problemas Alocação\n");
        exit(1);
    }

    lerAluno(ptr);

    printf("Nome: %s\n", ptr->nome);
    printf("Curso: %s\n", ptr->curso);
    printf("Ano de ingresso: %d\n", ptr->anoIngresso);
    printf("Previsão de formatura: %d\n", ptr->anoFormatura);

    return 0;
}
