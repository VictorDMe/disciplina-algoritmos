/*
Obj: Calulcar um desconto se uma determinada compra for feito a vista.
Entrada: valor da mercadoria.
Saída: valor com e sem desconto.
*/

#include <stdio.h>

int main(void) {
    float valor;

    printf("Valor da mercadoria: ");
    scanf("%f", &valor);

    printf("\nVALOR: R$ %.2f \n", valor);
    printf("Recebeste um desconto de R$ %.2f na sua compra!\n", valor * 0.1);
    printf("VALOR FINAL: R$ %.2f \n", valor * 0.9);
    return 0;
}
