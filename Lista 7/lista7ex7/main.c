/*
Obj: Descobrir o tipo de um triangulo
Entrada: 3 catetos do triangulo
Saída: Tipo de triângulo
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

	//Verificando se é póssivel a existência de um triângulo
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            printf("\nTIPO: isósceles \n");
        else if (a == b && a == c)
            printf("\nTIPO: equilátero \n");
        else
            printf("\nTIPO: escaleno \n");
	}
    else
        printf("Não é póssivel a existência deste triângulo \n");
    return 0;
}
