/*
Obj: Calcular o desconto de um produto
Entrada: nome, quantidade e preço de um produto
Saída: total e o desconto de um produto
*/

#include <stdio.h>

int main(void) {
    char nome[50];
    int quantidade;
    float valor, desconto;

    printf("Nome do produto: ");
    gets(nome);
    printf("Quantidade no estoque: ");
    scanf("%d", &quantidade);
    printf("Valor: R$ ");
    scanf("%f", &valor);

    if (quantidade <= 5)
        desconto = 0.98;
    else if (quantidade <= 10)
        desconto = 0.97;
    else
        desconto = 0.95;

    printf("\nDETALHES:\n");
    printf("VALOR TOTAL EM ESTOQUUE: %.2f\n", quantidade * valor);
    printf("DESCONTO: %.2f%% \n", 100 - desconto * 100);
    printf("TOTAL A PAGAR: R$ %.2f\n", quantidade * valor * desconto);

    return 0;
}
