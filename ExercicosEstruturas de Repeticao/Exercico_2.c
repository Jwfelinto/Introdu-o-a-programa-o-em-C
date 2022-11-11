#include <stdio.h>

void main(){
	
	float i, n1, n2, media_aluno=0, media_classe=0, soma_reprovado, soma_exame, soma_aprovado;
	
	for (i = 1; i <= 6; i++){
		printf("Digite a primeira nota:");
		scanf("%f",&n1);
		printf("Digite a segunda nota:");
		scanf("%f",&n2);
		
		media_aluno = (n1 + n2) / 2 ;
		printf("Sua media eh: %.2f\n", media_aluno );	
		
		if(media_aluno <4){
		printf("Reprovado!\n");	
		
		}else if(media_aluno<7){
		printf("Exame!\n");	
		
		}else{
			printf("Aprovado!\n");
		}
		
	
	}

system("pause");
		
}
