#include<stdio.h>
int main(){
	int i, numero, soma;
	soma = 0;
	for (i = 1; i <= 10; i++){
		printf("Insira o %dº número", i);
		scanf("%d", &numero);
		soma = soma + numero; 
	}
	printf("A soma é %d", soma);
	return 0;
}