#include <stdio.h>

void main (){
	int ncoelhos;
	float custo;
	
	printf("Digite o numero de coelhos:");
	scanf("%d" ,&ncoelhos);
	
	custo = (ncoelhos * 0.7) / 18+10;
	
	printf("O custo por coelho eh: %.2f", custo);

system("pause");	
}
