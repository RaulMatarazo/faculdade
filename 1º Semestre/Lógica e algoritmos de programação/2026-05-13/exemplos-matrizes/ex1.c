#include<stdio.h>
 
 
int main(){
	int matriz[3][5] = {0};
	int i, j;
	int total = 0;
	
	for(i=0; i<3;i++){
		for(j=0;j<5;j++){
			printf("Insira um numero na posicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<3;i++){
		for(j=0;j<5;j++){
			if (matriz[i][j] >= 15 && matriz[i][j] <= 20){
				total++;
			}
		}
	}	
	
	printf("Total de elementos entre 15 e 20: %d", total);
	
	
	
	
	return 0;
}
