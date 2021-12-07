#include <stdio.h>

int main (void) {
	int i, nRodadas, vitoriaDario=0, vitoriaXerxes=0, numeroD, numeroX;
	
	scanf("%i", &nRodadas);
	for (i = 0; i < nRodadas; i++) {
		scanf("%d %d", &numeroX, &numeroD);
		if (numeroX == (numeroD + 1) % 5 || numeroX == (numeroD + 2) % 5)
            vitoriaXerxes++;
        else
            vitoriaDario++;	
	}
	if (vitoriaXerxes > vitoriaDario)
		printf("xerxes");
	else
		printf("dario");
	
	return 0; 	
}

