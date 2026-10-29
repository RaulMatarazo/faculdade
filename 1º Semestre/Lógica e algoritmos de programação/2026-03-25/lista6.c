#include <stdio.h>
int main(){
	double salario_inicial, novo_salario, aumento;
	int ano, i;
	
	salario_inicial = 2000;
	aumento = 1.5;
	
	novo_salario = 2000 + ((2000 * 1.5) / 100);
	
	printf("Ano atual: ");
	scanf("%d", &ano);
	
	for (i = 1997; i <= ano; i++){
	    aumento = aumento*2;
	    novo_salario = novo_salario + novo_salario * aumento/100;
		
	}
	
	
	printf("\nNovo salário: %f", novo_salario);
	
	return 0;
}