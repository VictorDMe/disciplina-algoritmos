/*
Obj: Mostrar o sexo escrito por extenso
Entrada: Caractere do sexo
Saída: Sexo por extenso
*/

#include <stdio.h>

int main(void) {
	char sexo;

	printf("Digite seu sexo (m / f): ");
	scanf("%c", &sexo);

	while (sexo != 'm' && sexo != 'f') {
        fflush(stdin);
		printf("caractere inválido! \n");
		printf("Por favor, digite novamente (m / f): ");
		scanf("%c", &sexo);
    }

    switch (sexo) {
    case 'm':
        printf("MASCULINO \n");
        break;
    case 'f':
        printf("FEMININO \n");
        break;
    }

    return 0;
}
