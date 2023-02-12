#include <math.h>
#include <stdio.h>

float raio;
float area;

int main(void) {
  printf("\nIniciando programa - calcular a área de um círculo ...\n\n");

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  area = M_PI * pow(raio, 2);

  printf("\nUm circulo com o raio %.2f tem área igual a %.2f \n", raio, area);

  return 0;
}