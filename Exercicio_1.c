#include <stdio.h>

void main (){
	float salario, novosalario;
	
	printf("Informe o salario:");
	scanf("%f" ,&salario);
	
	if (salario <=499){
		novosalario = salario + (salario * 0.3);
	}else{
		printf("Voce nao possui reajute")
}

printf("Seu novo salario eh : %.2f", novosalario);
}
