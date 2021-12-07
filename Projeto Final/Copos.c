#include <stdio.h> 

int main (void) {
	int nJogadas, tipo, i; 
	char posicao;
	
	scanf("%d", &nJogadas);
	scanf(" %c", &posicao);
	
	for (i=0; i < nJogadas; i++) {
		scanf("%d", &tipo);
		switch (tipo) {
			case 1:
				if (posicao == 'A')
					posicao = 'B';
				else if (posicao == 'B')
					posicao = 'A';
				break;
			case 2:
				if (posicao == 'B')
					posicao = 'C';
				else if (posicao == 'C')
					posicao = 'B';
				break;
			case 3: 
				if (posicao == 'C')
					posicao = 'A';
				else if (posicao == 'A')
					posicao = 'C';
				break;
					
		}
	
	}
	printf("%c", posicao);
	return 0;
	 
}
