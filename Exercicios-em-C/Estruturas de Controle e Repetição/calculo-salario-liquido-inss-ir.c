#include <stdio.h>

int main() {

//vars
float salario_bruto, deducao_inss, deducao_ir, salario_liquido;
char resposta;

//const tab desc inss
const float SdC1 = 1320;
const float SdC2 = 2571.29;
const float SdC3 = 3856.94;
const float SdC4 = 7507.49;
const float Ali1 = 0.075;
const float Ali2 = 0.09;
const float Ali3 = 0.12;
const float Ali4 = 0.14;
//const tab desc ir
const float SdCir1 = 1903.98;
const float SdCir2 = 2826.65;
const float SdCir3 = 3751.05;
const float SdCir4 = 4664.68;
const float Aliir1 = 0;
const float Aliir2 = 0.075;
const float Aliir3 = 0.15;
const float Aliir4 = 0.225;
const float Aliir5 = 0.275;

//saida 
printf("Bem vindo ao software para calcular os salarios liquidos!\n");
printf("Digite seu salario bruto.\n");
//entrada data
scanf("%f", &salario_bruto);

//condicional
if (salario_bruto <= SdC1) {
    deducao_inss = salario_bruto * Ali1;
}
 else if (salario_bruto <= SdC2) {
    deducao_inss = salario_bruto * Ali2;
 }
 else if (salario_bruto <= SdC3) {
    deducao_inss = salario_bruto * Ali3;
 }
 else {
    deducao_inss = salario_bruto * Ali4;
 }

if (salario_bruto <= SdCir1) {
    deducao_ir = salario_bruto * Aliir1;
}
 else if (salario_bruto <= SdCir2) {
    deducao_ir = salario_bruto * Aliir2;
 }
 else if (salario_bruto <= SdCir3) {
    deducao_ir = salario_bruto * Aliir3;
 }
 else if (salario_bruto <= SdCir4) {
    deducao_ir = salario_bruto * Aliir4;
 }
 else {
    deducao_ir =  salario_bruto * Aliir5;    
 }
  
salario_liquido = salario_bruto - deducao_inss - deducao_ir; 

printf("Salario Liquido: RS %.2f\n", salario_liquido);
printf("Voce deseja saber mais informacoes do calculo? y/n\n");
scanf(" %c", &resposta);

if (resposta == 'y') {
   printf("Salario Bruto: RS %.2f\n", salario_bruto);
   printf("Deducao INSS: RS %.2f\n", deducao_inss);
   printf("Deducao IR: RS %.2f\n", deducao_ir);
}

    return 0;
}