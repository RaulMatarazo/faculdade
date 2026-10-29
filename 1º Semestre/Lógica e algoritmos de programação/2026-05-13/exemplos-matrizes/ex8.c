#include<stdio.h>
 
 
int main(){
	int linhas = 2;
	int colunas = 2;
	int matriz[linhas][colunas];
	int matriz2[linhas][colunas];
	int i, j;
	
	int soma[linhas][colunas];
	int diferenca[linhas][colunas];
	
	
	printf("\nMatriz 1\n");
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("Insira um numero[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMatriz 2\n");
	for(i=0; i<colunas;i++){
		for(j=0;j<linhas;j++){
			printf("Insira um numero[%d][%d]:", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	for(i=0; i<colunas;i++){
		for(j=0;j<linhas;j++){
			soma[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
	
	for(i=0; i<colunas;i++){
		for(j=0;j<linhas;j++){
			diferenca[i][j] = matriz[i][j] - matriz2[i][j];
		}
	}
	
	printf("Matriz Soma:\n");
	for(i=0; i<colunas;i++){
		for(j=0;j<linhas;j++){
			printf(" [%d] ", soma[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz Diferenca:\n");
	for(i=0; i<colunas;i++){
		for(j=0;j<linhas;j++){
			printf(" [%d] ", diferenca[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
