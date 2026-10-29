#include<stdio.h>

int main(){
	float nota = 0, total_notas = 0, soma_notas = 0;
	do {
		printf("Informe a nota: ");
		scanf("%f", &nota);
			
		if (nota == -1){
			break;
		}
		
		total_notas++;
		soma_notas = soma_notas + nota;
	} while(nota != -1);
	
	printf("Total de notas: %.0f", total_notas);
	printf("\nMédia: %.2f", soma_notas/total_notas);
	
	return 0;
}