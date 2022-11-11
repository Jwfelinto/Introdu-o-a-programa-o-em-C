#include  <stdio.h>


void main(){
	
	int uni = 1, valor_venda = 0;
	float valor;
	
	
	while(uni > 0){
		
		printf("quantas unidades desse produto voce ira comprar: ");
		scanf("%d", &uni);
		if (uni<=0){
		printf("Digite um valor valido\n");
		break;
		
		}
		
		

		printf("informe o valor do produto: ");
		scanf("%f", &valor);
		if (valor<=0){
			printf("Digite um valor valido:\n");
			break;
		}
		valor_venda = valor_venda + valor * uni;
	}
	
	printf("O valor da venda e de: %.2d\n", valor_venda);
	
	
	
	
system("pause");	
	
	
	
}
