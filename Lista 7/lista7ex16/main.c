/*
Obj: Calcular a média salaria, de filhos e descobrir o maior salário e o percentual de pessoas com salário x < 100
Entrada> Salário e número de fihos
Saída: Médias e maior salário
*/

#include <stdio.h>

int main(void) {
    float salary, salaryAVG = 0, childrenAVG = 0, biggerSalary = 0, percentual = 0;
	int children, counter = 0;

	printf("Salary: ");
	scanf("%f", &salary);

	while (salary > 0) {
		printf("Quantity of childrens: ");
		scanf("%d", &children);

		salaryAVG += salary;
		childrenAVG += children;

		if (salary > biggerSalary)
            biggerSalary = salary;

		if (salary <= 100)
            percentual = percentual + 1;

		counter +=  1;
		printf("\nSalary: ");
		scanf("%f", &salary);
	}

	salaryAVG /= counter;
	childrenAVG /= counter;
	percentual *= 100 / counter;
	printf("\nSalary average:: %.2f \n", salaryAVG);
	printf("Children average: %.2f \n", childrenAVG);
	printf("Bigger salary: %.2f \n", biggerSalary);
	printf("%.2f%% of peoples with salary lower or equal to $100 \n", percentual);
    return 0;
}
