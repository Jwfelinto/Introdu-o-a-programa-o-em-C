#include <stdio.h>

void main(){
	

	
	int numeros, i,  acumulador_numeros=0;
	
	for (i = 0; i <= 20; i++){
		printf("Digite um numero inteiro e positivo:");
		scanf("%d",&numeros);
		

		
	
		if (numeros>=0){
		acumulador_numeros = acumulador_numeros + numeros;	
		}
	}
		printf("A soma dos numeros eh: %d", acumulador_numeros);
}
