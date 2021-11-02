/*
Obj: Calcular o peso ideal de uma pessoa
Entrada: Altura
Saíde: Peso ideal
*/

#include <stdio.h>

int main(void) {
    float altura;

    printf("Digite seu altura: ");
    scanf("%f", &altura);
    printf("Peso ideal: %.2f kg\n", (altura - 1.1) * 100);

    return 0;
}
