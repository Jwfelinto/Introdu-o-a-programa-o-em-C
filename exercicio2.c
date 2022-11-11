#include <stdio.h>

void main(){
	
	float preco_fabrica, valor_imposto = 0, valor_distribuidor, preco_final;
	
	printf("Informe o preco de fabrica: ");
	scanf("%f",&preco_fabrica);
	
	if(preco_fabrica <= 12000){
		valor_distribuidor = preco_fabrica * 0.05;
	}else if(preco_fabrica <= 25000){
		valor_distribuidor = preco_fabrica * 0.1;
		valor_imposto = preco_fabrica * 0.15;
	}else{
		valor_distribuidor = preco_fabrica * 0.15;
		valor_imposto = preco_fabrica * 0.2;
	}
	
	preco_final = preco_fabrica + valor_distribuidor + valor_imposto;
	
	printf("Distribuidor: %.2f\n",valor_distribuidor);
	printf("Imposto: %.2f\n", valor_imposto);
	printf("Preco Final: %.2f", preco_final);
}
