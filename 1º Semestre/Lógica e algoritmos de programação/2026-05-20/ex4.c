#include<stdio.h>
int main(){
	char frase[200];
	int i, contador = 1;
	
	printf("Digite uma frase: ");
	fgets(frase, 200, stdin);
	
	for(i = 0; frase[i] != '\0';i++){
		if (frase[i] == ' ' && frase[i + 1] != ' '){
			contador++;
		}
	}
	
	printf("Quantidade de palavras: %d", contador);
	return 0;
}
