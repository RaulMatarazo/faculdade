#include<stdio.h>

int main(){
	int tamanho_sequencia = 0, anterior_1 = 1, anterior_2 = 0, numero_atual, numero = 0,
	i = 1;
	
	printf("Informe um número: ");
	scanf("%d", &numero);
	
	for (i = 1; i <= numero; i++){
		if (i == 1){
			printf(" [0] ");
			continue;
		}
		
		if (i == 2) {
			printf(" [1] ");
			continue;
		}
		
		numero_atual = anterior_1 + anterior_2;
		printf(" [%d] ", numero_atual);
		
		if (i % 2 == 0)
			anterior_1 = numero_atual;
		else
			anterior_2 = numero_atual;
	}
	
	return 0;
}