/*
Obj: Calcular o salário líquido de um funcionário
Entrada: Salário bruto do funcionário
Saída: Salário líquido
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
