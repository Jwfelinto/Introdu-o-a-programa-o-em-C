#include <stdio.h>

void main(){
	int idade;
	float peso;
	
	printf("Informe a sua Idade: ");
	scanf("%d",&idade);
	printf("Informe o Peso: ");
	scanf("%f",&peso);
	
	printf("A sua idade eh: %d\n", idade);
	printf("O seu peso eh: %.2f\n", peso);
	
	system("pause");
}
