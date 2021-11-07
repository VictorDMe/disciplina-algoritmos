/*
Obj: Alterar os valores dos produtos de uma loja
Entrada: Valores
Saída: Valores + 20% e a média.
*/

#include <stdio.h>

int main(void) {
    int codigo, contador = 0;
	float custo, mediaSA = 0;

	printf("Digite o código do produto: ");
	scanf("%d", &codigo);

	while (codigo > 0) {
		printf("Preço inicial do produto: ");
		scanf("%f", &custo);
		mediaSA += custo;

		printf("O novo preço com o aumento será de R$ %.2f \n\n", custo * 1.2);
		contador++;

		printf("Digite o código do produto: ");
		scanf("%d", &codigo);
	}

	printf("\nA média de preços antes do aumento era de R$ %.2f \n", mediaSA / contador);
	printf("A média de preços depois do aumento é de R$ %.2f \n", mediaSA / contador * 1.2);
    return 0;
}
