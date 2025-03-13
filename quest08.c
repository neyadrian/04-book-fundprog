/* Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.

SALÁRIO             PERC. DE AUMENTO
Até R$ 300,00       35%
Acima de R$ 300,00  15% */

#include <stdio.h>

int main() {

    float sal, novoSal;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    if (sal < 300.00) {
        novoSal = sal * 1.35;
        printf("Salário reajustado: R$ %.2f\n", novoSal);
    } else {
        novoSal = sal * 1.15;
        printf("Salário reajustado: R$ %.2f\n", novoSal);
    }
    
    return 0;
}