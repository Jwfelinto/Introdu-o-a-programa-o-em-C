#include <stdio.h>

/*
	Leia dez idades e exiba a média das idades lidas
*/
void main(){
	
	int idade, i, acumulador_idades = 0;
	float media;
	//i - contador
	for(i = 1; i <= 10; i++){
		printf("Informe uma idade: ");
		scanf("%d", &idade);
		//acumulador_idades = acumulador_idades + idade;
		acumulador_idades += idade;
	}

	media = (float)acumulador_idades/2;
	
	printf("A soma de todas as idades lidas eh: %d\n", acumulador_idades);
	printf("A soma das idades eh: %.2f", media);
}
