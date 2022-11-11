#include   <stdio.h>


void main(){
	
	
	int i , n , valor_total = 0;
	
	
	
	
	for(i = 1;i <=20 ;i ++){
		printf("informe o numero: ");
		scanf("%d",&n);
if (n >= 0){
valor_total = valor_total + n;
}

else
		printf("\n");


		
}

	
	
	
	
	printf("A soma dos numeros e de: %2.d\n", valor_total);
	
	
	
	
system("pause");
	
	
	
}
