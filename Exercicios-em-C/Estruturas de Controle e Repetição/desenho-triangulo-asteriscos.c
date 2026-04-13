#include <stdio.h>

int main() {

    int linhas = 0;

    printf("Ola aluno! quantas linhas voce deseja?\n");
    scanf("%d", &linhas);

    // Laco externo: controla o numero de linhas do triangulo
    for (int i = 1; i <= linhas; i++) {

        // Laco interno 1: controla o espacamento para centralizar o triangulo
        for (int espacos = 1; espacos <= linhas - i; espacos++) {
            printf(" ");
        }

        // Laco interno 2: desenha o formato do triangulo com asteriscos
        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }

        // Pula para a proxima linha depois de cada linha do triangulo
        printf("\n");
    }

    return 0;
}