/*
Obj: Calcular o equivalente de uma temperatura em cesiuls em fahrenheit
Entrada: Temperatura em celsius
Sa�da: Temperatura em fahrenheit
*/

#include <stdio.h>

int main() {
    float tempC;

    printf("Temperatura em celsius: ");
    scanf("%f", &tempC);

    printf("Equivalente em fahrenheit: %.2f \n", tempC * 9 / 5 + 32);
    return 0;
}
