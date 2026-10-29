#include<stdio.h>

int main(){
	int numero = 0, i = 0;
	do {
		printf("Informe um número: ");
		scanf("%d", &numero);
		
	} while(numero < 1 || numero > 10);
	
	for (i = 0; i <= 10; i++){
		printf("\n%d x %d = %d", numero, i, numero*i);
	}
	
	return 0;
}