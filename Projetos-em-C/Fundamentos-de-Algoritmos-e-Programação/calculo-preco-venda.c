#include <stdio.h>

int main() {

float entrada, imposto, desconto, resultado;
     
printf("Digite o preco do produto: ");
scanf("%f", &entrada);

imposto = 0.10;
desconto = 0.05;

imposto = entrada * imposto;
desconto = entrada * desconto;

resultado = entrada + (imposto) - (desconto);

printf("O resultado e: %.2f\n", resultado);


return 0;
}