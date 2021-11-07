/*
Obj: Categorizar um membro de um clube
entrada: info
Sa�da: Categoria
*/

#include <stdio.h>
#include <string.h>
int main(void) {
    int anoCategoria;
	float rendaMensal, patrimonioLiquido;
	char categoriaInicial, barcoAncorado, isPreRepublicaOuGovernador;

	printf("Renda mensal: ");
	scanf("%f", &rendaMensal);

	printf("Patrim�nio l�quido: ");
	scanf("%f", &patrimonioLiquido);
    fflush(stdout);

	printf("Qual sua categoria atualmente? \n");
	printf(" n = nao possuo \n a = padrao \n b = bronze \n p = prata \n o = ouro \n d = diamante \n");
	printf("Sua resposta: ");
	fflush(stdin);
	scanf("%c", &categoriaInicial);

	printf("Est� a quantos anos nessa categoria? ");
	scanf("%d", &anoCategoria);
    fflush(stdin);

	printf("Possui um barco ancorado no clube? (s / n) ");
	scanf("%c", &barcoAncorado);
    fflush(stdin);

	printf("Voc� � presidente da rep�blica ou gorvenador? (s / n) ");
	scanf("%c", &isPreRepublicaOuGovernador);
    fflush(stdin);

	if ((rendaMensal >= 15000 && barcoAncorado == 's' && patrimonioLiquido >= 10000000) || (isPreRepublicaOuGovernador == 's'))
		printf("\nPARAB�NS! \nSua categoria inicial �: Diamante");
	else if ((rendaMensal >= 7000 && categoriaInicial == 'p' && anoCategoria >= 20) || (barcoAncorado == 's' && rendaMensal >= 10000))
        printf("\nPARAB�NS! \nSua categoria inicial �: Ouro");
    else if (rendaMensal >= 5000 || (categoriaInicial == 'b' && anoCategoria >= 5))
        printf("\nPARAB�NS! \nSua categoria inicial �: Prata");
    else if (rendaMensal >= 3000 || (categoriaInicial == 'a' && anoCategoria >= 10))
        printf("\nPARAB�NS! \nSua categoria inicial �: Bronze");
    else
        printf("\nPARAB�NS! \nSua categoria inicial �: Padrao");

    return 0;
}
