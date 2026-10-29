#include<stdio.h>

int main(){
	int numero = 0, i = 0;
	
	printf("Informe um número: ");
	scanf("%d", &numero);
	
	printf("Múltiplos de %d\n", numero);
	
	for (i = 1; i <= numero; i++){
		if (numero % i == 0)
			printf("\n%d", i);
	}

	
	return 0;
}