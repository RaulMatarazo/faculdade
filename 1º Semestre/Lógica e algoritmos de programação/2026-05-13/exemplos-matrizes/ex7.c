#include<stdio.h>
 
 
int main(){
	int linhas = 4;
	int colunas = 6;
	int matriz[linhas][colunas];
	int matriz2[colunas][linhas];
	int i, j, k;
	
	int resultado[linhas][linhas];
	
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
	
	for(i=0; i<linhas;i++){
		for(j=0;j<linhas;j++){
			resultado[i][j] = 
			matriz[i][0] * matriz2[0][j] + 
			matriz[i][1] * matriz2[1][j] +
			matriz[i][2] * matriz2[2][j] +
			matriz[i][3] * matriz2[3][j] +
			matriz[i][4] * matriz2[4][j] +
			matriz[i][5] * matriz2[5][j];
		}
	}
	
	for(i=0; i<linhas;i++){
		for(j=0;j<linhas;j++){
			printf(" [%d] ", resultado[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
