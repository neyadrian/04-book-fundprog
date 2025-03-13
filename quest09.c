/* Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.

SALDO MÉDIO               PERCENTUAL
Acima de R$ 400,00        30% do saldo médio
R$ 400,00 --- R$ 300,00   25% do saldo médio
R$ 300,00 --- R$ 200,00   20% do saldo médio
Até R$ 200,00             10% do saldo médio */

#include <stdio.h>

int main() {
    float saldoMed, credit;

    printf("Digite o saldo médio: ");
    scanf("%f", &saldoMed);

    if (saldoMed > 400.00) {
        credit = saldoMed * 0.30;  
    } else if (saldoMed > 300.00) {
        credit = saldoMed * 0.25;
    } else if (saldoMed > 200.00) {
        credit = saldoMed * 0.20;
    } else {
        credit = saldoMed * 0.10;
    }

    printf("Saldo médio: R$ %.2f\n", saldoMed);
    printf("Valor do crédito especial: R$ %.2f\n", credit);

    return 0;
}