#include <stdio.h>

int main() {

int disciplinas = 0, alunos_dis = 0, alunos_total = 0, aluno_limit = 0;

printf("Bem vido(a) adm! Quantas diciplinas serao? \n");
scanf("%d", &disciplinas);
printf("Digite o limite dos alunos para essas disciplinas: \n");
scanf("%d", &aluno_limit);

//laco principal para disciplinas
for (int i = 1; i <= disciplinas; i++) {
    printf("Digite a quantidade de aluno para esta disciplina: %d \n", i);
    scanf("%d", &alunos_dis);

    //cond para recusar entradas de negativos
    if (alunos_dis < 0) {
        printf("Entrada invalida, tenha certeza de colocar numeros positivos!\n");
        continue;
    }

    alunos_total += alunos_dis; //soma os alunos dis com ao aluno total

    //cond de limites
    if (alunos_total > aluno_limit) {
        printf("Limite de alunos atingido! Cadastro será interrompido.\n");
        break;
    }
}

//resultado
printf("Total de alunos matriculados: %d\n", alunos_total);

    return 0;
}