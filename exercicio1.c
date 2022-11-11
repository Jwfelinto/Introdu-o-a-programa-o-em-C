#include <stdio.h>

void main(){
	float salario, gratificacao, imposto, novo_salario;
	
	printf("Informe o salario: ");
	scanf("%f",&salario);
	
	gratificacao = salario * 0.05;
	imposto = salario * 0.07;
	novo_salario = salario + gratificacao - imposto;
	
	printf("O novo salario eh: %.2f", novo_salario);
}
