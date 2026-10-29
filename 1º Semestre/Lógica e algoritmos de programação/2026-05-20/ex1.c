#include<stdio.h>

int main(){
	char frase[255];
	int total_letras  = 0;
	int total_numeros = 0;
	int total_espaco  = 0;
	int i = 0;
	
	printf("Insira uma frase: ");
	fgets(frase, 255, stdin);
	
	for(i=0; frase[i] !='\0';i++){
		if(frase[i] >= 'a' && frase[i] <= 'z'){
			total_letras++;
		}
		
		if(frase[i] >= '0' && frase[i] <= '9'){
			total_numeros++;
		}
		
		if(frase[i] == ' '){
			total_espaco++;
		}
	}
	
	printf("Total de letras: %d\n",   total_letras);
	printf("Total de numeros : %d\n", total_numeros);
	printf("Total de espacos: %d\n",  total_espaco);
	
	
	return 0;
}
