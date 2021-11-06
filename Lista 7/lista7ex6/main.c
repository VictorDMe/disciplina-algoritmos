/*
Obj: Verificar se um funcion�rio est� qualificado para aposentadoria
Entrada: C�digo do empregado, ano de nascimento e ingresso na empresa
Sa�da: Requerer ou n�o requerer aposentadoria
*/

#include <stdio.h>

int main(void) {
	int ID, anoNascimento, anoEmpresa, idade, anosTrabalhados, aposentadoria;

	printf("C�digo do funcion�rio: ");
	scanf("%d", &ID);
	printf("Ano de nascimento: ");
	scanf("%d", &anoNascimento);
	printf("Ano de ingresso na empresa: ");
	scanf("%d", &anoEmpresa);

	idade = 2021 - anoNascimento;
	anosTrabalhados = 2021 - anoEmpresa;

	// Aposentadoria == 1 Est� apto
	// Aposentadoria == 0 N�o est� apto

	aposentadoria = 0;

	if (idade >= 65 || anosTrabalhados >= 30 || (idade >= 60 && anosTrabalhados >= 25))
		aposentadoria = 1;

	switch (aposentadoria) {
	case 1:
		printf("Requerer aposentadoria \n");
		break;
	default:
		printf("N�o requerer aposentadoria \n");
		break;
	}

    return 0;
}
