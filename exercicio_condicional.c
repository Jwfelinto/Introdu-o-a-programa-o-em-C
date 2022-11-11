#include <stdio.h>

void main(){
	
	float preco, novo_preco;
	
	printf("Informe o preco: ");
	scanf("%f",&preco);
	
	if(preco <= 50){
		novo_preco = preco + (preco * 0.05);
	}else if(preco <= 120){
		novo_preco = preco + (preco * 0.1);	
	}else{
		novo_preco = preco + (preco * 0.15);
	}
	printf("O novo preco eh: %.2f\n", novo_preco);
	
	if(novo_preco <= 80){
		printf("Barato!\n");
	}else if(novo_preco <= 120){
		printf("Normal!\n");
	}else if(novo_preco <= 200){
		printf("Caro!\n");
	}else{
		printf("Muito Caro!\n");
	}
}
