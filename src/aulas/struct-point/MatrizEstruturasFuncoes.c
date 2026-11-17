#include<stdio.h>
#include<string.h>

struct aluno {
    char nome[80];
    char curso[60];
    int anoIngresso;
    int anoFormatura;
};

void lerAluno(struct aluno *p){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    printf("Nome: ");
    if (fgets(p->nome, sizeof(p->nome), stdin) != NULL) {
        p->nome[strcspn(p->nome, "\n")] = '\0';
    }
    
    printf("Curso: ");
    if (fgets(p->curso, sizeof(p->curso), stdin) != NULL) {
        p->curso[strcspn(p->curso, "\n")] = '\0';
    }
    

    printf("Ano de ingresso: ");
    scanf("%d", &p->anoIngresso);
    
    printf("Previsão de formatura em: ");
    scanf("%d", &p->anoFormatura);
    
    return ;
}

int main(){
    struct aluno a[3];
    int i;

    for(i=0; i<3; i++){
        printf("Dados do aluno %d\n", i+1);
        lerAluno(&a[i]);
    }

    for(i=0; i<3; i++){
       printf("---------------------------------------\n");
       printf("Nome: %s\n", a[i].nome);
       printf("Curso: %s\n", a[i].curso);
       printf("Ano de ingresso: %d\n", a[i].anoIngresso);
       printf("Previsão de formatura: %d\n", a[i].anoFormatura);
    }

    return 0;
}
