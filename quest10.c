/* O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

Custo de Fábrica                    % do distribuidor     % dos impostos
Até R$ 12.000,00                    5                     isento
Entre R$ 12.000,00 e R$ 25.000,00   10                    15
Acima de R$ 25.000,00               15                    20 */

#include <stdio.h>

int main() {
    
    float custFab, precoCons;
    
    printf("Digite o custo de Fábrica: ");
    scanf("%f", &custFab);

    if (custFab <= 12000.0) {
        precoCons = custFab * 1.05;
        printf("Preço ao consumidor: R$ %.2f\n", precoCons);
    } else if (custFab > 12000.0 && custFab <= 25000.0) {
        precoCons = custFab * 1.10 * 1.15; 
        printf("Preço ao consumidor: R$ %.2f\n", precoCons);
    } else {
        precoCons = custFab * 1.15 * 1.20; 
        printf("Preço ao consumidor: R$ %.2f\n", precoCons);
    }

    return 0;
}