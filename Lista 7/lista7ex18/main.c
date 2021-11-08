/*
Obj: Calcular a média de um aluno
entrada: Nome e 21 notas
Saída: Média das 20 maiores notas
*/

#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[50], grau;
	float nota, notaBaixa, media;

	printf("Nome do aluno: ");
	gets(nome);

	while (stricmp(nome, "fim") != 0) {
		media = 0;
		notaBaixa = 0;
		for (int i = 1; i <= 21; i++) {
			printf("%d° nota: ", i);
			scanf("%f", &nota);
			if (notaBaixa > nota || i == 1) {
				media += notaBaixa;
				notaBaixa = nota;
            }
			else
				media += nota;
		}

		media /= 20;
		if (media < 6.9) grau = 'D';
		else if (media < 7.9) grau = 'C';
		else if (media < 8.9) grau = 'B';
		else grau = 'A';

		printf("A média do aluno é %.2f e seu grau é %c \n\n", media, grau);
		printf("\nNome do aluno: ");
		setbuf(stdin, NULL);
		gets(nome);
	}

    return 0;
}
