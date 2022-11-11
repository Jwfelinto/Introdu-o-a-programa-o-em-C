#include <stdio.h>

void main(){
	
	int i;
	float preco, soma_total = 0, media;
	
	for(i = 1; i <=  5; i++){
		printf("Informe os precos:");
		scanf("%f", &preco);
		soma_total = soma_total + preco;
	
}
 media = soma_total / 5;
printf("A soma dos precos eh: %f\n", soma_total);
printf("A media dos precos eh: %.2f\n", media);
		
	}
