#include <stdio.h>

int main() {
    // 1. DECLARAÇÃO E INICIALIZAÇÃO
    // Declara um vetor de 5 inteiros com valores iniciais de 1 a 5.
    int vetor[5] = {1, 2, 3, 4, 5};
    
    // Declara um ponteiro para inteiros 'p' e o associa ao vetor.
    // O nome 'vetor' (sem colchetes) já é o endereço do primeiro elemento (vetor[0]).
    int *p = vetor;

    // 2. MODIFICAÇÃO USANDO ARITMÉTICA DE PONTEIROS
    // Laço 'for' para iterar pelas 5 posições do vetor.
    for (int i = 0; i < 5; i++)
    {
        // Desreferenciação (*p): Acessa o VALOR no endereço atual apontado por 'p'.
        // O valor é incrementado em 10. Ex: O 1 vira 11, o 2 vira 12, etc.
        *p += 10;
        
        // Aritmética de Ponteiros: Move o ponteiro 'p' para o endereço do PRÓXIMO 'int'.
        // Isso faz 'p' avançar 4 bytes (o tamanho de um int) a cada repetição.
        p++;
    }

    // 3. PROVA REAL (IMPRESSÃO)
    // Laço 'for' para percorrer o vetor novamente e imprimir os resultados.
    // Nota: Optamos por usar a notação de vetor 'vetor[i]' para imprimir.
    // O vetor agora deve conter: 11, 12, 13, 14, 15.
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}