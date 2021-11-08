/*
Objetivo:  Descobrir de qual turma é o estudante que tirou nota 10 no ENEM
Entrada : Notas
Saída   : Turma
*/

#include <stdio.h>

int main(void) {
    float nota;
	int turma, turmaNota;

	for (int i = 1; i <= 3; i++) {
		printf("Quantos alunos possui a %d° turma? ", i);
		scanf("%d", &turma);
		for (int a = 1; a <= turma; a++) {
			printf("Nota do %d° aluno: ", a);
			scanf("%f", &nota);
			if (nota == 10)
				turmaNota = i;
		}
		printf("\n");
	}

	printf("\nO aluno com a maior nota está na %d° turma \n", turmaNota);
    return 0;
}
