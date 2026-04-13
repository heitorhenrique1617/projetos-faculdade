#include <stdio.h>

const float fator_peso = 25.0;

float calcular_peso(float base, float largura, float altura) {
    // 1. Declarar uma variável para armazenar o volume.
    float volume; 
    
    // 2. Calcular o Volume (V = base * largura * altura)
    volume = base * largura * altura;
    
    // 3. Calcular o Peso (P = V * fator_peso)
    // Usamos o 'fator_peso' que está definido como global.
    float peso = volume * fator_peso;
    
    // 4. Retornar o resultado do peso
    return peso; 
}

float selecionar_guindaste(float peso) {
    if (peso <= 500) {
        return 1;
    }
    else if(peso <= 1500) {
        return 2;
    }
    else {
        return 3;
    }


}

int main() {
float base, largura, altura;
float peso;
int guidaste;
    
    
    printf("Insira a base: \n");
    scanf("%f", &base);
    printf("Insira a largura: \n");
    scanf("%f", &largura);
    printf("Insira a altura: \n");
    scanf("%f", &altura);

    peso = calcular_peso(base, largura, altura);
    guidaste = selecionar_guindaste(peso);

 switch (guidaste) {
    case 1:
        printf("O guindaste recomendado eh: G1\n");
        break;
    case 2:
        printf("O guindaste recomendado eh: G2\n");
        break;
    case 3:
        printf("O guindaste recomendado eh: G3\n");
        break;
    default:
        printf("Erro na selecao do guindaste.\n");
}
    

    return 0;
}


