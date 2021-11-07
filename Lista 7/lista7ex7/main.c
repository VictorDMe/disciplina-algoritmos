/*
Obj: Descobrir o tipo de um triangulo
Entrada: 3 catetos do triangulo
Sa�da: Tipo de tri�ngulo
*/

#include <stdio.h>

int main(void) {
    int a, b, c;

	printf("Cateto A: ");
	scanf("%d", &a);
	printf("Cateto B: ");
	scanf("%d", &b);
	printf("Cateto C: ");
	scanf("%d", &c);

	//Verificando se � p�ssivel a exist�ncia de um tri�ngulo
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            printf("\nTIPO: is�sceles \n");
        else if (a == b && a == c)
            printf("\nTIPO: equil�tero \n");
        else
            printf("\nTIPO: escaleno \n");
	}
    else
        printf("N�o � p�ssivel a exist�ncia deste tri�ngulo \n");
    return 0;
}
