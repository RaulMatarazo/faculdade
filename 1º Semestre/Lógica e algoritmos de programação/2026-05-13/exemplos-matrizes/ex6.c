#include<stdio.h>
 
 
int main(){
	int linhas = 2;
	int colunas = 2;
	int matriz[linhas][colunas];
	int i, j;
	
	int soma_colunas[colunas];
	int soma_coluna = 0;
	int matriz_resultante[linhas][colunas];

	
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("Insira um numero[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	
	for(i=0; i<linhas;i++){
		soma_coluna = 0;
		for(j=0;j<colunas;j++){
			soma_coluna += matriz[j][i];
		}
		soma_colunas[i] = soma_coluna;
	}
	
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			matriz_resultante[i][j] = matriz[i][j] * soma_colunas[j];
		}
	}
	
	printf("Matriz resultante");
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("  [%d]  ", matriz_resultante[i][j]);
		}
		printf("\n");
	}

	
	
	return 0;
}
