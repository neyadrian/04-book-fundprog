/* Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

TABELA DAS GRATIFICAÇÕES
SALÁRIO                     GRATIFICAÇÃO
Até R$ 350,00               R$ 100,00
R$ 350,00 -- R$ 600,00      R$ 75,00
R$ 600,00 -- R$ 900,00      R$ 50,00
Acima de R$ 900,00          R$ 35,00 */

#include <stdio.h>

int main() {
    
    float sal, grat, imposto, novoSal;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    if (sal <= 350.00) {
        grat = 100.00;
    } else if (sal <= 600.00) {
        grat = 75.00;
    } else if (sal <= 900.00) {
        grat = 50.00;
    } else {
        grat = 35.00;
    }

    imposto = sal * 0.07;

    novoSal = sal + grat - imposto;

    printf("Novo salário: R$ %.2f\n", novoSal);

    return 0;
}
