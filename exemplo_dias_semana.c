#include <stdio.h>

void main(){
	
	int dia;
	
	printf("Informe o numero do dia: ");
	scanf("%d",&dia);
	
	switch(dia){
		case 1:
			printf("Domingo!");
			break;
		case 2:
			printf("Segunda-Feira!");
			break;
		case 3:
			printf("Terca-Feira!");
			break;
		case 4:
			printf("Quarta-Feira!");
			break;
		default:
			printf("Informe um dia valido!");
	}
	
}
