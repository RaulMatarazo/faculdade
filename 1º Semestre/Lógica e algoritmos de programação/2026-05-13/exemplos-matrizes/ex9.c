#include<stdio.h>
 
 
int main(){
	int linhas = 3;
	int colunas = 3;
	int matriz[linhas][colunas];
	int i, j;
	
	int numero;
	int resultado[linhas][colunas];
	

	
	
	printf("\nMatriz 1\n");
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("Insira um numero[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Insira um numero:");
	scanf("%d", &numero);
	
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			resultado[i][j] = matriz[i][j] * numero;
		}
	}
	
		printf("Matriz Resultado:\n");
	for(i=0; i<colunas;i++){
		for(j=0;j<linhas;j++){
			printf(" [%d] ", resultado[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
