#include <stdio.h>



int main() {

  float peso;
  float altura;
  float imc;

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\nO imc de uma pessoa com peso %.2f Kg e altura %.2f m Ã© igual a %.2f", peso, altura, imc);

  return 0;
}