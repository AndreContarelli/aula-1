#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int num_aleatorio;
	srand(time(NULL));
	
	num_aleatorio = 1 + rand()%100;
	
	int palpite;
	printf("Insira seu palpite: \n");
	scanf("%d", &palpite);
	
	while(palpite < 1 || palpite > 100){
		printf("Valor invalido, coloque um numero entre 1 e 100");
		scanf("%d", &palpite);
	}
	if(num_aleatorio == palpite){
		printf("Parabéns!!! Você acertou! \n");
	}
	if(num_aleatorio > palpite){
		printf("Você chutou muito baixo! O valor correto é: %d\n ",num_aleatorio);
	}
	if(num_aleatorio < palpite){
		printf("Você chutou muito alto! O valor correto é: %d\n ",num_aleatorio);
	}
	return 0;
}