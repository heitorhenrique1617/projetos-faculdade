#include <stdio.h>

void calcularprecototal(int qntd, float preco, float *preco_total) {
    *preco_total=0;

    *preco_total= preco * qntd;
}


int main() {
float precoproduto, preco_final;
int qntdproduto;

    printf("Digite a quantidade do produto: ");
    scanf("%d", &qntdproduto);
    printf("Digite o preço do produto: ");
    scanf("%f", &precoproduto);

   calcularprecototal(qntdproduto, precoproduto, &preco_final);

    printf("O preco final eh: %.2f", preco_final);



    return 0;
}