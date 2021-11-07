/*
Obj: Concedor um b�nus para os clientes de uma loja
Entrada: Valor das comprar do ano passado
Sa�da: Valor com b�nus
*/

#include <stdio.h>
#include <string.h>
int main(void) {
	float bonus, valor;
	char nome[50];

	// Instru��es
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

			printf("Sua compra teve um b�nus e seu custo final ser� de R$ %.2f \n\n", bonus * valor);
		}
    }
	while (strcmp(nome, "fim") != 0);

    return 0;
}
