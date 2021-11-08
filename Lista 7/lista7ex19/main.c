/*
Objetivo:  Calcular o peso e a quantidade total de blocos de uma pirâmide
Entrada : Massa de cada bloco e a quantidade de blocos da base
Saída   : Massa total e total de blocos da pirâmide
*/

#include <stdio.h>

int main(void) {
    float massa, massaTotal;
	int camadaInferior, camadaSuperior, totalCamadas = 0;

	printf("Base da pirâmide: ");
	scanf("%d", &camadaInferior);
	printf("Massa de cada bloco: ");
	scanf("%f", &massa);

	massaTotal = camadaInferior * massa;
	while (camadaInferior >= 1) {
		totalCamadas += camadaInferior;
		camadaSuperior = camadaInferior - 1;
		massaTotal += camadaSuperior * massa;
		camadaInferior = camadaSuperior;
	}

	printf("Massa total = %.2f kg \n", massaTotal);
	printf("Será necessário um total de %d blocos para a construção \n", totalCamadas);

    return 0;
}
