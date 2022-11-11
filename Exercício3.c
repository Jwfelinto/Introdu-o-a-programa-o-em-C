#include <stdio.h>

void main(){
	//O programa deve ler nome e idade de 20 pessoas, imprimir a quantidade de pessoas maior de idade.
	char nome;
	int i, idade, maior_idade = 0;
	
	for( i = 1; i <=20 ; i++ ){
		
		
		printf("Digite sua idade:\n");
		scanf("%d", &idade);
		fflush(stdin);
		printf("Digite seu nome:\n");
		scanf("%c", &nome);
		
		if(idade >17){
			maior_idade++;
		}
		
	
	}
	
	printf("A quantidade de pessoas maior de idade eh: %d\n", maior_idade);
	
	system("pause");
}
