#include <stdio.h>
int main() {

float soma = 0, nota = 0, media;
int notas_inseridas = 0;
    
do {
    printf("Digite uma nota (ou -1 para finalizar): \n");
    scanf("%f", &nota);

if (nota != -1) {
    soma = soma + nota;
    notas_inseridas = notas_inseridas + 1;
}

} while (nota != -1); 



    if (notas_inseridas > 0)
    {
        media = (float)(soma) / notas_inseridas;
        printf("a media do aluno eh: %.2f\n", media);
    }
    else {
        printf("Um erro ocorreu! tenha certeza de colocar pelo menos uma nota!");
    }
    

    return 0;
}