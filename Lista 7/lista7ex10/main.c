/*
Obj: Falar as unidades que compôem um número
Entrada: Número
Saída: unidades por extenso
*/

#include <stdio.h>

int main(void) {
    char numero_char[10];
    int numero;

    printf("Digite um valor 0 - 1000: ");
    scanf("%d", &numero);

    if (numero <= 1000 && numero > 0) {
        sprintf(numero_char, "%d", numero);
        for (int i = 0; i <= 3; i++) {
            switch (numero_char[i]) {
            case '0':
                printf("Zero. ");
                break;
            case '1':
                printf("Um. ");
                break;
            case '2':
                printf("Dois. ");
                break;
            case '3':
                printf("Três. ");
                break;
            case '4':
                printf("Quatro. ");
                break;
            case '5':
                printf("Cinco. ");
                break;
            case '6':
                printf("Seis. ");
                break;
            case '7':
                printf("Sete. ");
                break;
            case '8':
                printf("Oito. ");
                break;
            case '9':
                printf("Nove. ");
                break;
            }
        }
        printf("\n");
    }

    else
        printf("Numero fora do intervalo 0 - 1000\n");

    return 0;
}
