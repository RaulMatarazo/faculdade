#include<stdio.h>

int main(){
	int numero = 0, maior_impar = 0, total_primos = 0, 
	i = 1, total_multiplos = 0;
	float soma_pares = 0, total_numeros = 0;
	
	do {
		printf("Informe um número: ");
		scanf("%d", &numero);
		
		total_multiplos = 0;
			
		if (numero == 0){
			break;
		}
		
		if (numero % 2 == 0) {
			soma_pares = soma_pares + numero;
			total_numeros++;
		} else {
			if (numero > maior_impar) {
					maior_impar = numero;
			}
		}
		
		for (i = 1; i <= numero; i++){
			if (numero % i == 0){
				total_multiplos++;
			}
		}
		
		if (total_multiplos == 2){
			total_primos++;
		}
	} while (numero != 0);
	
	printf("\nMédia dos pares: %.2f", soma_pares/total_numeros);
	printf("\nMaior ímpar: %d", maior_impar);
	printf("\nTotal de primos: %d", total_primos);
	
	return 0;
}