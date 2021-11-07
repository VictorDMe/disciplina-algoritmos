/*
Obj: Converter medidas
Entrada: Medidas em pés e milhas
Saída: Valores em metros e quilometros
*/

#include <stdio.h>

int main(void) {
    char option;
	float miles = 0, foot = 0, meters, kilometers, distance;

	printf("Miles or foot? (m / f) ");
	scanf("%c", &option);

	while (option != 'n') {
		printf("Distance: ");
		scanf("%f", &distance);

		switch (option) {
            case 'm':
				miles += distance;
				break;
            case 'f':
				foot += distance;
				break;
			default:
				printf("Invalid measure option! \n");
		}

		printf("\nMiles or foot? (m / f) ");
		setbuf(stdin, NULL);
		scanf("%c", &option);
	}

	meters = foot / 3.28;
	kilometers = miles / 1.61;

	printf("\n\nTotal in foot: %.2f \n", foot + miles * 5280);
	printf("Total in miles: %.2f \n", miles + foot / 5280);
	printf("Total in meters: %.2f \n", meters + kilometers * 1000);
	printf("Total in kilometers: %.2f \n", kilometers + meters / 1000);
    return 0;
}
