#include<stdio.h>

int main(){
	int numero = 0, i = 0, total_multiplos = 0;
	
	printf("Informe um número: ");
	scanf("%d", &numero);
	
	for (i = 1; i <= numero; i++){
		if (numero % i == 0)
			total_multiplos++;
	}
	
	if (total_multiplos == 2)
		printf("%d é primo", numero);
	else
		printf("%d NÃO é primo", numero);

	
	return 0;
}