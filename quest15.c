/* Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.

TIPO    DESCRIÇÃO                REDIMENTO MENSAL
1       Poupança                 3%
2       Fundos de renda fixa     4% */

#include <stdio.h>

int main() {
    
    int tipo;
    float valorInvest, novoValor;

    printf("Digite o valor do investimento: ");
    scanf("%f", &valorInvest);

    printf("Digite 1 p/ Poupança ou 2 p/ Fundos de renda fixa: ");
    scanf("%f", &tipo);

    if (tipo == 1) {
        novoValor = valorInvest * 1.03;
    } else {
        novoValor = valorInvest * 1.04;
    }
    
    printf("Valor investimento: %.2f\n", novoValor);

    return 0;
}