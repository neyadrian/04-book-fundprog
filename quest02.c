/* Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir: 
0,0 --- 3,0   Reprovado
3,0 --- 7,0   Exame
7,0 --- 10,0  Aprovado */

#include <stdio.h>

int main() {
    
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("A média foi: %.2f\n", media);

    if (media >= 0.0 && media < 3.0)
    {
        printf("Reprovado\n");
    } else if (media >= 3.0 && media < 7.0)
    {
        printf("Exame\n");
    } else if (media >= 7.0 && media <= 10.0)
    {
        printf("Aprovado\n");
    }

    return 0;
}