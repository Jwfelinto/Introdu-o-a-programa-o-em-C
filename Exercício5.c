#include<stdio.h>

void main(){
	
	int num = 11;
	int a = 5, b = 1;
	int i;
	
	num = num + a;
	a = a + b;
	num = a - num; 
	
	for (i = 0; i < b; i++);
	{ 
	num = num + 1;
	}
	
	printf("numero: %d\n", num);
	system("pause");
	return 0;
	
}

