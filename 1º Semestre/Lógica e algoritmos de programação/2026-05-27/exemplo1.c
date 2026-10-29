#include<stdio.h>

void somar(float x, float y);
void multiplicar(float a, float b);
int main(){
	float a, b;
	int opcao;
	
	
	do {
		printf("\nMenu");
		printf("\n[1] Somar");
		printf("\n[2] Multiplicar");
		printf("\n[5] Sair");
		printf("\nEscolha: ");
		scanf("%d", &opcao);
		
		if (opcao == 1){
			printf("N1: ");
			scanf("%f", &a);
			
			printf("N2: ");
			scanf("%f", &b);
			somar(a, b);
		}
		
		else if (opcao == 2){
		
		
			printf("N1: ");
			scanf("%f", &a);
			
			printf("N2: ");
			scanf("%f", &b);
			multiplicar(a, b);
		} 
		else if (opcao == 5){
			break;
		} else {
			printf("Escolha uma opcao correta");
		}
	} while (opcao != 5);
	

}


void somar(float x, float y){
	printf("Resultado: %f", x + y);
}
 void multiplicar (float a, float b){
 	printf("Resultado: %f", a * b);
 }

