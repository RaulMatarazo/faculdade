#include<stdio.h>

int main(){
	int numero = 0, total_numero = 0;
	do {
		printf("Informe um número: ");
		scanf("%d", &numero);
			
		if (numero == 0){
			break;
		}
		
		total_numero = total_numero + numero;
	} while(numero != 0);
	
	printf("Total: %d", total_numero);
	
	return 0;
}