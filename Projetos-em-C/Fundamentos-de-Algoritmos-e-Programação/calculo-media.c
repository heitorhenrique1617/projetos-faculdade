#include <stdio.h>



int main() {



int num1, num2;



float media;



printf("Digite o primeiro numero: ");

scanf("%d", &num1);

printf("Digite o segundo numero: ");

scanf("%d", &num2);

printf("Voce digitou o numero %d, e o numero %d\n", num1, num2);

media = (num1 + num2) / 2; //inteiros, mas se quiser posso colocar (float) no começo para numeros quebrados

printf("a media desses numeros sao: %2f\n", media); // o "2 define o tanto de 1.(00)









return 0;

}