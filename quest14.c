/* Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.

FAIXA SALARIAL               % DE AUMENTO
Até R$ 300,00                50%
R$ 300,00 - R$ 500,00        40%
R$ 500,00 - R$ 700,00        30%
R$ 700,00 - R$ 800,00        20%
R$ 800,00 - R$ 1.000,00      10%
Acima de - R$ 1.000,00        5% */

#include <stdio.h>

int main() {
    
    float sal, novoSal;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    if (sal <= 300.00) {
        novoSal = sal * 1.50;
    } else if (sal > 300.00 && sal <= 500.00) {
        novoSal = sal * 1.40;
    } else if (sal > 500.00 && sal <= 700.00) {
        novoSal = sal * 1.30;
    } else if (sal > 700.00 && sal <= 800.00) {
        novoSal = sal * 1.20;
    } else if (sal > 800.00 && sal <= 1000.00) {
        novoSal = sal * 1.10;
    } else {
        novoSal = sal * 1.05;
    }

    printf("Novo salário: %.2f\n", novoSal);

    return 0;
}