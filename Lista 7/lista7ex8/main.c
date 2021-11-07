/*
Obj: Descobrir a dura��o de uma partida de xadrez.
Entrada: Hora de in�cio e hora de fim.
Sa�da: Dura��o do jogo.
*/

#include <stdio.h>

int main(void) {
	int horaInicio, horaFim, totalHoras;

	printf("Hora de in�cio: ");
	scanf("%d", &horaInicio);
	printf("Hora de t�rmino: ");
	scanf("%d", &horaFim);

	if (horaFim < horaInicio)
		totalHoras = 24 - horaInicio + horaFim;
	else {
		if (horaFim > horaInicio)
			totalHoras = horaFim - horaInicio;
		else
			totalHoras = 24;
	}

	printf("O jogo de xadrez durou %d horas \n", totalHoras);

    return 0;
}
