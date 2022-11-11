#include <stdio.h>

void main(){
	
	/*
		Ler um número do usuário e verificar se o número
		é positivo.
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


