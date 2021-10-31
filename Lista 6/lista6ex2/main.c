/*
Objetivo: Calcular a média de 3 notas!
Entrada: 3 notas
Saída: Média
*/

#include <stdio.h>

int main(){
    float media, nota1, nota2, nota3;

    printf("digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media: %.2f", media);

    return 0;
}
