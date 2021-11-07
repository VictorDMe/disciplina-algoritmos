/*
Obj: Concedor um bônus para os clientes de uma loja
Entrada: Valor das comprar do ano passado
Saída: Valor com bônus
*/

#include <stdio.h>
#include <string.h>
int main(void) {
	float bonus, valor;
	char nome[50];

	// Instruções
	do {
        setbuf(stdin, NULL);
		printf("Nome do cliente: ");
		gets(nome);
		if (strcmp(nome, "fim") != 0) {

			printf("Valor em compras: ");
			scanf("%f", &valor);
			if (valor >= 500000)
				bonus = 0.85;
			else
				bonus = 0.90;

			printf("Sua compra teve um bônus e seu custo final será de R$ %.2f \n\n", bonus * valor);
		}
    }
	while (strcmp(nome, "fim") != 0);

    return 0;
}
