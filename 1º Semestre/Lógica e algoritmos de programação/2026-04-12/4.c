#include<stdio.h>

int main(){
	int numero = 0, fatorial = 1, i;
	
	printf("Informe um número: ");
	scanf("%d", &numero);
	
	for(i = numero; i > 0; i--){
		fatorial = fatorial * i;
	}
	
	
	printf("%d! = %d", numero, fatorial);
	
	return 0;
}