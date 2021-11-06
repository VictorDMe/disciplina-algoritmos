/*
Obj: Calcular o salário de um funcionário
Entrada: quantidade de peças fabricadas
Saída: Salário
*/
#include <stdio.h>

int main(void) {
	int quantidade;
	float salario;

	printf("Quantidade de brinquedos produzidos: ");
	scanf("%d", &quantidade);

	if (quantidade <= 500)
		salario = 1050;
	else if (quantidade <= 750)
        salario = 1050 + (quantidade - 500) * 0.5;
    else
        salario = 1175 + (quantidade - 750) * 0.75;

	printf("Salário: R$ %.2f\n", salario);

    return 0;
}
