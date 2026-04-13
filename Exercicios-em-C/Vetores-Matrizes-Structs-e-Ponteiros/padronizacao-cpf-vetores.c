#include <stdio.h>

int main() {

    // Declaração de variáveis
    int i, j = 0;
    char CPF[15], nome[20], cpf_limpo[12];

    printf("--= Bem vindo ao sistema De cadastro de CPF =--\n");
    
    // Entrada de Dados
    printf("Digite o nome do cliente: \n");
    scanf("%s", nome);
    printf("Digite o CPF do cliente (com pontos/traços): \n"); 
    scanf("%s", CPF);

    // Processamento (
    for (i = 0; CPF[i] != '\0'; i++) { 
        if (CPF[i] >= '0' && CPF[i] <= '9')
        {
            cpf_limpo[j] = CPF[i]; // Copia o dígito
            j++;                   // Avança o ponteiro de escrita
        } 
    }

    // Finalização da String Limpa
    cpf_limpo[j] = '\0';

    // Saída de Dados 
    printf("\n--- Resultado da Padronização ---\n");
    printf("O cliente %s tem o CPF padronizado: %s\n", nome, cpf_limpo);

    return 0;
}