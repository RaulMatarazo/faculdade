#include<stdio.h>

int main(){
	char genero, opcao;
	int idade, mulheres, homens, qfamilias, tipo, negativo = 0;
	float renda, soma, ph50, pm40, media;
	int h50 = 0, m40 = 0;
	
	do {
		printf("\nGêneros [M/F]: ");
		scanf("%c", &genero);
		
		printf("\nDigite a idade: ");
		scanf("%d", &idade);
		
		printf("\nDigite a renda familiar: ");
		scanf("%f", &renda);
		
		printf("\nTipo sanguínio [1 -> O- / 2 -> Outros]: ");
		scanf("%d", &tipo);
		
		if (genero == 'f' || genero == 'F')  
			mulheres++;
		
		if (genero == 'm' || genero == 'M')  
			homens++;
		
		soma = soma + renda;
		qfamilias++;
		
		if (tipo == 1)
			negativo++;
		
		if  ( (genero == 'm' || genero == 'M') && (idade > 50) )
			h50++;
		
		if (genero == 'f' || genero == 'F'){

			if (tipo == 1 && idade > 40) {
				m40++;
			}
		}
		
		printf("\n Deseja continuar?");
		scanf("%c", &opcao);
	} while (opcao != 'n' || opcao != 'N');
	
	ph50 = h50 / homens * 100;
	pm40 = m40 / mulheres * 100;
	media = soma / qfamilias;
	
	printf("\nQuantidade de mulheres: %d", mulheres);
	printf("\nQuantidade de homens: %d", homens);
	printf("\nMedia renda: %f", media);
	printf("\nQuantidade de pessoas com 0-: %d", negativo);
	printf("\nPercentual de homens com mais de 50 anos: %f", ph50);
	printf("\nPercentual de mulhere com sangue O- com mais de 40 anos: %f", pm40);
	
	
}