/*
Obj: Verificar se um funcionário está qualificado para aposentadoria
Entrada: Código do empregado, ano de nascimento e ingresso na empresa
Saída: Requerer ou não requerer aposentadoria
*/

#include <stdio.h>

int main(void) {
	int ID, anoNascimento, anoEmpresa, idade, anosTrabalhados, aposentadoria;

	printf("Código do funcionário: ");
	scanf("%d", &ID);
	printf("Ano de nascimento: ");
	scanf("%d", &anoNascimento);
	printf("Ano de ingresso na empresa: ");
	scanf("%d", &anoEmpresa);

	idade = 2021 - anoNascimento;
	anosTrabalhados = 2021 - anoEmpresa;

	// Aposentadoria == 1 Está apto
	// Aposentadoria == 0 Não está apto

	aposentadoria = 0;

	if (idade >= 65 || anosTrabalhados >= 30 || (idade >= 60 && anosTrabalhados >= 25))
		aposentadoria = 1;

	switch (aposentadoria) {
	case 1:
		printf("Requerer aposentadoria \n");
		break;
	default:
		printf("Não requerer aposentadoria \n");
		break;
	}

    return 0;
}
