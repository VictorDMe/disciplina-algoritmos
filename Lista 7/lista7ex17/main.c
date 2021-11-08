/*
Obj: Descobrir quantos anos demorará para que uma pessoa alcance uma altura
Entrada: Tamanho inicial e crescimento anual de duas pessoas
Saída: Anos
*/

#include <stdio.h>

int main(void) {
    float altB, altA, creB, creA, oprA, oprC;
	int anos = 0;

	printf("1° altura (em cm): ");
	scanf("%f", &altB);
	printf("Crescimento anual: ");
	scanf("%f", &creB);

	printf("2° altura (em cm): ");
	scanf("%f", &altA);
	printf("Crescimento anual: ");
	scanf("%f", &creA);

	if (altA < altB) {
		oprA = altB;
		oprC = creB;
		altB = altA;
		creB = creA;
		altA = oprA;
		creA = oprC;
	}

	while (altB < altA) {
		altB += creB;
		altA += creA;
		anos++;
	}

	printf("\nIrá demorar %d anos para que a pessoa mais baixa se torne maior \n", anos);
    return 0;
}
