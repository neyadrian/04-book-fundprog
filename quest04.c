// Faça um programa que receba três números e mostre o maior.

#include <stdio.h>

int main() {
    
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    printf("Digite o terceiro número: ");
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("O maior número é: %i\n", num1);
    } else if (num2 > num3) {
        printf("O maior número é: %i\n", num2);
    } else {
        printf("O maior número é: %i\n", num3);
    }

    return 0;
}