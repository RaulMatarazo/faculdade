#include<stdio.h>
 
 
int main(){
	int matriz[6][3] = {0};
	int i, j;
	int a, b;
	int c, d;
	int maior = 0, menor = 0;
	
	for(i=0; i<6;i++){
		for(j=0;j<3;j++){
			printf("Insira um numero na posicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	
	maior = matriz[0][0];
	menor = matriz[0][0];
	
	for(i=0; i<6;i++){
		for(j=0;j<3;j++){
			if (matriz[i][j] > maior){
				maior = matriz[i][j];
				a = i;
				b = j;
			}
			
			if (matriz[i][j] < menor){
				menor = matriz[i][j];
				c = i;
				d = j;
			}
		}
	}	
	
	printf("Maior = [%d][%d] = %d", a, b, maior);
	printf("\nMenor = [%d][%d] = %d", c, d, menor);
	
	
	
	
	return 0;
}
