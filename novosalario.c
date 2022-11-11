#include <stdio.h>

void main (){
	float salario, novosalario;
	
	printf("Informe o salario:");
	scanf("%f" ,&salario);
	
	if (salario <=300){
		novosalario = salario + (salario * 0.35);
	}else{
		novosalario = salario + ( salario * 0.15);
}

printf("Seu novo salario eh : %.2f", novosalario);
}


