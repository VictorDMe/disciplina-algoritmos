#include <stdio.h>

int main(void) {
    int numeroPostos, distanciaM, i, ultimo, posicaoPosto;
    char resultado = 'S';

    ultimo = 0;

    scanf("%i %i", &numeroPostos, &distanciaM);

    for (i=1; i <= numeroPostos; i++){
        scanf("%i", &posicaoPosto);
        if (posicaoPosto - ultimo <= distanciaM && resultado == 'S')
            resultado = 'S';
        else
            resultado = 'N';
        ultimo = posicaoPosto;
        }
    if ((42195 - ultimo <= distanciaM) && resultado == 'S')
        printf("S");
    else
        printf("N");

    return 0;
}
