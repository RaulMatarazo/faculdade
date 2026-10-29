#include<stdio.h>
 
 
int main(){
	int linhas = 5;
	int colunas = 5;
	int matriz[linhas][colunas];
	int i, j;
	
	int soma_linha = 0;
	int soma_coluna = 0;
	int soma_matriz = 0;
	
	int soma_diagonal_principal = 0;
	int soma_diagonal_secundaria = 0;

	
	
	printf("\nMatriz 1\n");
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("Insira um numero[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			
			if (i == 3){
				soma_linha += matriz[i][j];
			}
			
			if (j == 1){
				soma_coluna += matriz[i][j];
			}
			
			if(i == j){
            	soma_principal += matriz[i][j];
	        }
	
	        if(i + j == linhas - 1){
	            soma_secundaria += matriz[i][j];
	        }
			
			soma_matriz += matriz[i][j];
			
		}
	}
	
	printf("Soma linha 4: %d", soma_linha);
	printf("Soma coluna 2: %d", soma_coluna);
	printf("Soma diag principal: %d", soma_diagonal_principal);
	printf("Soma diag secundaria: %d", soma_diagonal_secundaria);	
	
	return 0;
}
