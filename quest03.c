// Faça um programa que receba dois números e mostre o menor.

#include <stdio.h>

int main() {
    
    int num1, num2;

    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite outro número: ");
    scanf("%i", &num2);

    if (num1 < num2)
    {
        printf("%i é menor que %i\n", num1, num2);
    } else{
        printf("%i é menor que %i\n", num2, num1);
    }
    
    return 0;
}