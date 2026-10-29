#include<stdio.h>
int main(){
	int i, idade, maior_idade;
	for (i = 1; i < 10; i++) {
		printf("Insira a %dª idade", i);
		scanf("%d", &idade);
		if (idade > maior_idade) {
			maior_idade = idade;	
		}
	}
	
	printf("A maior idade é %d", maior_idade);
	return 0;
}