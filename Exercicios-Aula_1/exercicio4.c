#include <math.h>
#include <stdio.h>

float cat1;
float cat2;
float hipotenusa;

int main()
 {
  printf("\nIniciando o programa - Calcular a hipotenusa..\n\n");

  printf("Digite o valor do cateto 1: ");
  scanf("%f", &cat1);

  printf("Digite o valor do cateto 2: ");
  scanf("%f", &cat2);

  hipotenusa = sqrt(cat1 * cat1 + cat2 * cat2);

  printf("\nUm triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa "
         "igual a %.2f \n",
         cat1, cat2, hipotenusa);
}