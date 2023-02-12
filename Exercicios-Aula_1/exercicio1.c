#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int soma;
    int sub;
    int mult;
    int div;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma dos numeros é: %d \n", soma);
    sub = num1 - num2;
    printf("A subtracao é: %d \n", sub);
    mult = num1 * num2;
    printf("A multiplicacao é: %d \n", mult);
    div = num1 / num2;
    printf("A divisao dos numeros é: %d \n", div);

}