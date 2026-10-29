#include<stdio.h>
 
 
int main(){
	int linhas = 2;
	int colunas = 4;
	float matriz[linhas][colunas];
	int i, j;
	
	float vendas_mes[12] = {0};
	float vendas_ano = 0;
	float vendas_semana[4] = {0};
	
	for(i=0; i<linhas;i++){
		printf("%d mes:\n", i + 1);
		
		for(j=0;j<colunas;j++){
			printf("Venda semana %d: ", j + 1);
			scanf("%f", &matriz[i][j]);
		}
		printf("\n");
	}
	
	
	// mes
	for(i=0; i<linhas;i++){
		for(j=0;j<colunas;j++){
			vendas_mes[i]    += matriz[i][j];
			vendas_semana[j] += matriz[i][j];
			vendas_ano    += matriz[i][j];
		}
	}
	
	for (i = 0; i < linhas; i++) {
        printf("Mes %d R$ %f\n", i + 1, vendas_mes[i]);
    }
    
	for (j = 0; j < colunas; j++) {
        printf("Semana %d: R$ %f\n", j + 1, vendas_semana[j]);
    }
	
	printf("\n\nVendas ano: %f", vendas_ano);
	return 0;
}
