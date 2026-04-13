#include <stdio.h>

float calcular_c(float a, float b) {

float massa_total=(a* 321.43) + (b * 150.72);
return massa_total;  

}


int main() {
float c1, c2, c3, c4, Ma, Mb;

printf("Digite a quantidade do molA: \n");
scanf("%f", &Ma);
printf("Digite a quantidade do MolB: \n");
scanf("%f", &Mb);


c1=calcular_c(1.2, 1.0);
c2= calcular_c(1.4, 1.0);
c3=calcular_c(1.0, 1.6);
c4=calcular_c(Ma, Mb);

printf("A massa do composto C para a combinacao 1 eh: %.2f\n", c1);
printf("A massa do composto C para a combinacao 2 eh: %.2f\n", c2);
printf("A massa do composto C para a combinacao 3 eh: %.2f\n", c3);
printf("A massa do composto C para combinacao requisitada pelo usuario eh: %.2f\n", c4);

    return 0;
}