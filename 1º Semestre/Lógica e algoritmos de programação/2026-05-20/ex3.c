#include<stdio.h>
#include<string.h>

int main(){
	char palavra[100];
	int i;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	printf("Palavra invertida: ");
	
	for(i = strlen(palavra)-1;i>=0;i--){
		printf("%c", palavra[i]);
	}
}
