/*
Obj: Alterar os valores dos produtos de uma loja
Entrada: Valores
Sa�da: Valores + 20% e a m�dia.
*/

#include <stdio.h>

int main(void) {
    int codigo, contador = 0;
	float custo, mediaSA = 0;

	printf("Digite o c�digo do produto: ");
	scanf("%d", &codigo);

	while (codigo > 0) {
		printf("Pre�o inicial do produto: ");
		scanf("%f", &custo);
		mediaSA += custo;

		printf("O novo pre�o com o aumento ser� de R$ %.2f \n\n", custo * 1.2);
		contador++;

		printf("Digite o c�digo do produto: ");
		scanf("%d", &codigo);
	}

	printf("\nA m�dia de pre�os antes do aumento era de R$ %.2f \n", mediaSA / contador);
	printf("A m�dia de pre�os depois do aumento � de R$ %.2f \n", mediaSA / contador * 1.2);
    return 0;
}
