#include <stdio.h>

void main(){
	
	/*
		Ler um n�mero do usu�rio e verificar se o n�mero
		� positivo.
	*/
	
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	if(numero >= 0){
		printf("O numero eh positivo!");
	}else{
		printf("O numero eh negativo!");
	}
	
}


