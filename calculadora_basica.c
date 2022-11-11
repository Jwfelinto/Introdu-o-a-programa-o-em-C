#include <stdio.h>

void main(){
	
	float n1, n2, resultado = 0;
	int codigo;
	
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("Digite um codigo: ");
	scanf("%d",&codigo);
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	switch(codigo){
		case 1:
			resultado = n1+n2;
			printf("Resultado: %.2f", resultado);
			break;
		case 2:
			resultado = n1-n2;
			printf("Resultado: %.2f", resultado);
			break;
		case 3:
			resultado = n1 * n2;
			printf("Resultado: %.2f", resultado);
			break;
		case 4:
			if(n2 == 0){
				printf("Nao eh possivel dividir por zero!");
			}else{
				resultado = n1/n2;
				printf("Resultado: %.2f", resultado);
			}
			break;
		default:
			printf("Informe um codigo valido (1-4)");
	}
	
	
	
}
