#include <stdio.h>

#define NUM_ALUNOS 5
#define NUM_DISCIPLINAS 4

int main() {
    // Declarações (Ajustamos para inicializar a soma fora do loop, mas ela será zerada dentro)
    float notas[NUM_ALUNOS][NUM_DISCIPLINAS];
    float soma_atual, soma_total = 0; // Não precisa inicializar aqui, pois será zerada dentro do 'for (i)'
    float media_aluno, media_geral;
    int i, j;

    // BLOCO 1: LEITURA E ARMAZENAMENTO DAS NOTAS
    printf("--- INSERCAO DE NOTAS ---\n");
    for (i = 0; i < NUM_ALUNOS; i++)
    {
        // 1. A soma deve zerar para CADA ALUNO.
        soma_atual = 0; 

        for (j = 0; j < NUM_DISCIPLINAS; j++)
        {
            printf("Digite a nota do Aluno %d na Disciplina %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]); 
            
            // 2. Acumulação (dentro do laço de disciplinas 'j')
            soma_atual = soma_atual + notas[i][j]; 
           
            //faz a soma total das notas
            soma_total=soma_total + notas[i][j];
        }

        // 3. Cálculo da Média (Soma / Número de Disciplinas)
        media_aluno = soma_atual / NUM_DISCIPLINAS;

        // 4. Impressão correta da média
        printf(" -> A media geral do Aluno %d eh: %.2f\n\n", i + 1, media_aluno);
        
    } // Fim do for (i)

    media_geral = soma_total / (NUM_ALUNOS * NUM_DISCIPLINAS);
    printf("a media total eh de: %.2f\n", media_geral);

    printf("--- FIM DO PROCESSAMENTO ---\n");
    
    return 0;
}