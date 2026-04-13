#include <stdio.h>
#include <string.h>

struct Livro {
    
    char titulo[30];
    char autor[40];
    char ISBN[14];
    int AnoPublicado;
    int QntdEstoque;
};

int main() {
char autor_procurado[]="A. Programador";
int total_cadastrado=3;

    // 1. Declara um vetor para 100 livros
    struct Livro biblioteca[100];

    // --- CADASTRO DO LIVRO 1 (Índice 0) ---
    strcpy(biblioteca[0].titulo, "O Segredo da Estrutura");
    strcpy(biblioteca[0].autor, "A. Programador");
    strcpy(biblioteca[0].ISBN, "978-8575223309");
    biblioteca[0].AnoPublicado = 2024;
    biblioteca[0].QntdEstoque = 12;

    // --- CADASTRO DO LIVRO 2 (Índice 1) ---
    strcpy(biblioteca[1].titulo, "A Jornada do Codigo");
    strcpy(biblioteca[1].autor, "B. Algoritmo");
    strcpy(biblioteca[1].ISBN, "978-8575223316");
    biblioteca[1].AnoPublicado = 2022;
    biblioteca[1].QntdEstoque = 5;

    // --- CADASTRO DO LIVRO 3 (Índice 2) ---
    strcpy(biblioteca[2].titulo, "Padroes Essenciais C");
    strcpy(biblioteca[2].autor, "A. Programador"); // Este autor se repete!
    strcpy(biblioteca[2].ISBN, "978-8575223323");
    biblioteca[2].AnoPublicado = 2023;
    biblioteca[2].QntdEstoque = 20;

for (int i = 0; i < total_cadastrado; i++)
{
    if (strcmp(biblioteca[i].autor, autor_procurado) == 0) //se o autor for diferente de autor procurado
    {
        biblioteca[i].QntdEstoque -= 5; //faz isso tudo e abaixo
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].autor);
        printf("ISBN: %s\n", biblioteca[i].ISBN); 
        printf("Ano Publicado: %d\n", biblioteca[i].AnoPublicado);
        printf("Estoque: %d\n", biblioteca[i].QntdEstoque);
    }
    
}


    return 0;
}