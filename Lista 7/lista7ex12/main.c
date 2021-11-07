/*
Calcular a quantidade de meses necessários para que uma quantia chegue a 10.000
Entrada: Dinheiro inicial
Saída: Quantidade de meses
*/

#include <stdio.h>
#define JUROS 0.015

int main(void) {
	float valor;
	int contadorMeses = 0;

	printf("Valor inicial: ");
	scanf("%f", &valor);

	while (valor <= 10000) {
		valor += JUROS * valor;
		contadorMeses++;
	}

	printf("Será necessário deixar o dinheiro na conta por %d meses para que o valor chega a R$ 10.000,00 \n", contadorMeses);

    return 0;
}
