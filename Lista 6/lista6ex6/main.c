/*
Obj: Calcular o sal�rio l�quido de um funcion�rio
Entrada: Sal�rio bruto do funcion�rio
Sa�da: Sal�rio l�quido
*/

#include <stdio.h>

int main(void){
    float salarioBruto;

    printf("Salario bruto: R$ ");
    scanf("%f", &salarioBruto);
    printf("Salario liquido: R$ %.2f \n",
          salarioBruto * 0.9 * 0.95);
    return 0;
}
