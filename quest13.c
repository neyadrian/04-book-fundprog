/* Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.

TABELA 1 — PERCENTUAL DE AUMENTO
PREÇO                       %
Até R$ 50,00                5
Entre R$ 50,00 e R$ 100,00  10
Acima de R$ 100,00          15 

TABELA 2 — CLASSIFICAÇÕES
NOVO PREÇO                                  CLASSIFICAÇÃO
Até R$ 80,00                                Barato
Entre R$ 80,00 e R$ 120,00 (inclusive)      Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)     Caro
Maior que R$ 200,00                         Muito caro */

#include <stdio.h>

int main() {
    
    float preco, novoPreco;

    printf("Digite o preço: ");
    scanf("%f", &preco);

    if (preco <= 50.00) {
        novoPreco = preco * 1.05;
    } else if (preco > 50.00 && preco <= 100.00) {
        novoPreco = preco * 1.10;
    } else {
        novoPreco = preco * 1.15;
    }

    printf("Novo preço: R$ %.2f\n", novoPreco);

    if (novoPreco >= 80.00) {
        printf("Barato\n");
    } else if (novoPreco > 80.00 && preco <= 120.00) {
        printf("Normal\n");
    } else if (novoPreco > 120.00 && preco <= 200.00) {
        printf("Caro\n");
    } else {
        printf("Muito caro\n");
    }

    return 0;
}