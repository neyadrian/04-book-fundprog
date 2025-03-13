/* Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento. */

#include <stdio.h>

int main() {
    
    float sal, novoSal;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    if (sal <= 500.00) {
        novoSal = sal * 1.30;
        printf("Salário reajustado: R$ %.2f\n", novoSal);
    } else {
        printf("Salário sem direito a reajuste.\n");
    }
    
    return 0;
}