#include<stdio.h>
int main(){
	int matriz[2][4] = {0};
	int i, j;
	int total = 0, total_pares = 0;
	float pares = 0;
	
	for(i=0; i<2;i++){
		for(j=0;j<4;j++){
			printf("Insira um numero na posicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<2;i++){
		total = 0;
		for(j=0;j<4;j++){
			
			if (matriz[i][j] >= 12 && matriz[i][j] <= 20){
				total++;
			}
				
				
			if (matriz[i][j] % 2 == 0){
				total_pares++;
				pares += matriz[i][j];	
			}
				
		}
		printf("\nTotal de elementos entre 12 e 20 na %d linha: %d", i, total);
	}
	
	printf("\nMedia dos pares: %f", pares/total_pares);
	
	return 0;
}
