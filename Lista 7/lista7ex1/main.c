/*
Obj: Fala se um valor � positivo, negativo ou zero
Entrada: Um valor
Sa�da: "Positivo", "Negativo" ou "Zero"
*/

#include <stdio.h>

int main(void){

    float valor;

    printf("insira um valor: ");
    scanf("%f", &valor);

    if (valor > 0)
        printf("Positivo\n");
    else if (valor < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");

    return 0;
}
