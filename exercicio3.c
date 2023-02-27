#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int cont=1;
	int num_aleatorio;
	srand(time(NULL));
	
	num_aleatorio = 1 + rand()%100;
	
	int palpite;
	printf("Insira seu palpite: \n");
	scanf("%d", &palpite);
	
	while(palpite != num_aleatorio && cont<5){ 
	
		if(palpite < 1 || palpite > 100){
		  printf("Valor invalido, coloque um numero entre 1 e 100: \n");
		  scanf("%d", &palpite);
		}
		else if(num_aleatorio > palpite){
		  printf("Você chutou muito baixo!, Insira outro numero: \n");
		  scanf("%d", &palpite);
		
		}
		else if(num_aleatorio < palpite){
		  printf("Você chutou muito alto!, Insira outro numero: \n");
		  scanf("%d", &palpite);
		}
	
		++cont;

	}
	if(num_aleatorio == palpite){
		printf("Parabéns!!! Você acertou! \n");
		printf("Numero de tentativas para acertar: %d \n",cont);
		
    } 
    
    	
	return 0;
	
}