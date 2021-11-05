/*
Obj: Digitar o nome de uma cor com base na letra digitada
Entrada: Letra
Saída: Nome da cor
*/

#include <stdio.h>

int main(void) {
    char cor;

    printf("Digite uma letra: ");
    scanf("%c", &cor);

    switch (cor) {
    case 'a':
        printf("Azul\n");
        break;
    case 'b':
        printf("Branco\n");
        break;
    case 'l':
        printf("Laranja\n");
        break;
    case 'm':
        printf("Marrom\n");
        break;
    case 'p':
        printf("Preto\n");
        break;
    case 'r':
        printf("Rosa\n");
        break;
    case 'v':
        printf("Verde\n");
        break;
    default:
        printf("Valor invalido\n");
        break;
    }

    return 0;
}
