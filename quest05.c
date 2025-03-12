/* Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário. 
1 - Média entre os números digitados
2 - Diferença do maior pelo menor
3 - Produto entre os números digitados
4 - Divisão do primeiro pelo segundo */

#include <stdio.h>

int main() {
    
    int num1, num2, escolha, dif1, dif2, prod;
    float media, div;

    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite outro número: ");
    scanf("%i", &num2);

    printf("Escolha uma das opções:\n 1 - Média entre os números digitados\n 2 - Diferença do maior pelo menor\n 3 - Produto entre os números digitados\n 4 - Divisão do primeiro pelo segundo: ");
    scanf("%i", &escolha);

    if (escolha == 1){
        media = ((float)num1 + num2) / 2;
        printf("A média dos números é: %.2f\n", media);
    } else if (escolha == 2) {
        if (num1 > num2) {
            dif1 = num1 - num2;
            printf("A diferença é: %i\n", dif1);
        } else {
            dif2 = num2 - num1;
            printf("A diferença é: %i\n", dif2);
        }
    } else if (escolha == 3) {
        prod = num1 * num2;
        printf("O produto é: %i\n", prod);
    } else {
        div = (float) num1 / num2;
        printf("A divisão é: %.2f\n", div);
    }

    return 0;
}