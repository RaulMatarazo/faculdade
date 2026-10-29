#include<stdio.h>
 
 
int main(){
	int linhas = 15;
	int colunas = 5;
	
	int matriz[linhas][colunas];
	char nomes[linhas][20];
	int i, j;
	int total = 0;
	
	float soma_notas = 0;
	float media = 0;
	float soma_medias = 0;
	
	for(i=0; i<linhas;i++){
		printf("%d) Nome do aluno: ", i + 1);
		scanf("%s", &nomes[i]);
		for(j=0;j<colunas;j++){
			printf("%d nota do %s: ", j + 1, nomes[i]);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	
	
	for(i=0; i<linhas;i++){
		soma_notas = 0;
		printf("%s", nomes[i]);
		for(j=0;j<colunas;j++){
			soma_notas += matriz[i][j];
		}
		media = soma_notas/5;
		printf("\nMedia: %f", media);
		soma_medias += media;
		if (media > 5)
			printf("\nAprovado");
		else
			printf("\nReprovado");
		printf("\n\n");
	}	
	
	printf("Media da classe: %f" , soma_medias / linhas);
	
	return 0;
}
