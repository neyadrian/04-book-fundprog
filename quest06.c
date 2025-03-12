/* Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números. */

#include <stdio.h>
#include <math.h>

int main() {
    
    int num1, num2, escolha, pot;
    double rQuad1, rQuad2, rCub1, rCub2;
    
    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite outro número: ");
    scanf("%i", &num2);

    printf("Escolha uma das opções:\n 1 - O primeiro número elevado ao segundo número.\n 2 - Raiz quadrada de cada um dos números.\n 3 - Raiz cúbica de cada um dos números.: ");
    scanf("%i", &escolha);

    if (escolha == 1) {
        pot = pow(num1, num2);
        printf("O primeiro elevado ao segundo é: %i\n", pot);
    } else if (escolha == 2) {
        rQuad1 = sqrt((double) num1);
        rQuad2 = sqrt((double) num2);
        printf("Raiz Quadrada de %i: %.4f\n Raiz Quadrada de %i: %.4f\n", num1, rQuad1, num2, rQuad2);
    } else if (escolha == 3) {
        rCub1 = cbrt((double) num1);
        rCub2 = cbrt((double) num2);
        printf("Raiz Cúbica de %i: %.4f\n Raiz Cúbica de %i: %.4f\n", num1, rCub1, num2, rCub2);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}