#include<stdio.h>

int main(){
	int numero = 0, maior_numero = 0;
	do {
		printf("Informe um número: ");
		scanf("%d", &numero);
			
		if (numero == 0){
			break;
		}
		
		if (numero > maior_numero){
			maior_numero = numero;
		}
	} while(numero != 0);
	
	printf("Maior número: %d", maior_numero);
	
	return 0;
}