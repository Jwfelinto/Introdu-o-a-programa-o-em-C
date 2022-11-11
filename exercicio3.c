#include <stdio.h>

void main(){
	
	float altura, peso_ideal = 0;
	//qualquer símbolo do teclado representa um caractere (apenas um)
	char sexo;
	
	printf("Informe a altura: ");
	scanf("%f",&altura);
	fflush(stdin);
	printf("Informe o sexo (m/f): ");
	scanf("%c",&sexo);
	
	/*if(sexo == 'm'){
		peso_ideal = (72.7 * altura) - 58;
	}else{
		peso_ideal = (61.2 * altura) - 44.7;
	}*/
	
	switch(sexo){
		case 'm':
			peso_ideal = (72.7 * altura) - 58;
			printf("O peso ideal para pessoas do sexo %c eh %.2f", sexo, peso_ideal);
			break;	
		case 'f':
			peso_ideal = (61.2 * altura) - 44.7;
			printf("O peso ideal para pessoas do sexo %c eh %.2f", sexo, peso_ideal);
			break;
		default:
			printf("Informe um o sexo m - masculino, f - feminino!");
	}	
}
