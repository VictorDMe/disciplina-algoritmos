/*
Obj: Calcular o  valor de venda de um produto
Entrada: Valor de compra
Sa�da: Valor de venda
*/

#include <stdio.h>

int main(void) {
    float valorCompra;

    printf("Valor de compra: R$ ");
    scanf("%f", &valorCompra);
    printf("Valor de venda: R$ %.2f\n", valorCompra * 1.3);

    return 0;
}
