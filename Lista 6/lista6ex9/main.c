/*
Obj: Calcular a quantidade de dias que uma pessoa viveu;
Entrada: ano de nascimento
Saída: Dias que viveu
*/

#include <stdio.h>

int main(void) {
    int ano;

    printf("Ano de nascimento: ");
    scanf("%d", &ano);

    printf("Viveste aproximadamente %d dias \n", (2021 - ano) * 365);

    return 0;
}
