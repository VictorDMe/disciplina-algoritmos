/*
Obj: Calcular o salário de um func
Entrada: Pagamento por hora e horas trabalhadas
Saída: Salário Total
*/

#include <stdio.h>

int main(void) {
    int horas;
    float valorHora, salario;

    printf("Salário por hora: ");
    scanf("%f", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    if (horas < 160)
        salario = valorHora * horas;
    else
        salario = valorHora * 160 + (horas - 160) * valorHora * 0.5;

    printf("O salario deste mes sera de: R$ %.2f\n", salario);

    return 0;
}
