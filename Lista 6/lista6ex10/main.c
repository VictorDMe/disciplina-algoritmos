/*
Obj: Trocar o valor de duas variaveis
Entrada: Valor de A e B
Saída: A e B
*/

#include <stdio.h>

int main(void) {
    int A, B, c;

    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);

    c = A;
    A = B;
    B = c;

    printf("\nVALOR DE A: %d \nVALOR DE B: %d \n", A, B);

    return 0;
}
