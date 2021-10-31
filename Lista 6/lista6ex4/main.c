/*
Obj: Calcular o  valor de venda de um produto
Entrada: Valor de compra
Saída: Valor de venda
*/

#include <stdio.h>

int main() {
    float valorCompra;

    printf("Valor de compra: R$ ");
    scanf("%f", &valorCompra);
    printf("Valor de venda: R$ %.2f\n", valorCompra * 1.3);

    return 0;
}
