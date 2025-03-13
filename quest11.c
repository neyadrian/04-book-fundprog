/* Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.

SALÁRIO                    PERCENTUAL DE AUMENTO
Até R$ 300,00              15%
R$ 300,00 --- R$ 600,00    10%
R$ 600,00 --- R$ 900,00     5%
Acima de R$ 900,00          0% */

#include <stdio.h>

int main() {
    
    float sal, novoSal;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    if (sal <= 300.00) {
        novoSal = sal * 1.15;
    } else if (sal > 300.00 && sal <= 600.00) {
        novoSal = sal * 1.10;
    } else if (sal > 600.00 && sal <= 900.00) {
        novoSal = sal * 1.05;
    } else {
        novoSal = sal;
    }

    printf("Novo salário: R$ %.2f\n", novoSal);

    return 0;
}