/*
Obj: Calcular o IMC de uma pessoa
Entrada: Peso e altura
Sa�da: IMC
*/

#include <stdio.h>

int main() {
    float peso, altura;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("IMC: %.2f \n", peso / (altura * altura));
    return 0;
}
