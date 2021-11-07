/*
Obj: Descobrir a duração de uma partida de xadrez.
Entrada: Hora de início e hora de fim.
Saída: Duração do jogo.
*/

#include <stdio.h>

int main(void) {
	int horaInicio, horaFim, totalHoras;

	printf("Hora de início: ");
	scanf("%d", &horaInicio);
	printf("Hora de término: ");
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
