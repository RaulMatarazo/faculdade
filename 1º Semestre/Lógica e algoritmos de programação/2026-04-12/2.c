#include<stdio.h>

int main(){
	int numero = 0, total_positivo = 0, total_negativo = 0;
	do {
		printf("Informe um número: ");
		scanf("%d", &numero);
			
		if (numero == 0){
			break;
		}
		
		if (numero < 0){
			total_negativo++;
		}
		
		if (numero > 0) {
			total_positivo++;
		}
		
	} while(numero != 0);
	
	printf("Total positivos: %d", total_positivo);
	printf("\nTotal negativos: %d", total_negativo);
	
	return 0;
}